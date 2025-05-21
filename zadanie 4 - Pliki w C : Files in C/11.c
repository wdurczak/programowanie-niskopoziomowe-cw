#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DICT 4096
#define MAX_LINE 1024

void byteRunCompress(FILE *in, FILE *out) {
    int prev = fgetc(in), curr, count = 1;
    if (prev == EOF) return;
    while ((curr = fgetc(in)) != EOF) {
        if (curr == prev && count < 255) {
            count++;
        } else {
            fputc(count, out);
            fputc(prev, out);
            prev = curr;
            count = 1;
        }
    }

    fputc(count, out);
    fputc(prev, out);
}


typedef struct Node {
    unsigned char c;
    unsigned freq;
    struct Node *l, *r;
} Node;

Node *make_node(unsigned char c, unsigned f, Node *l, Node *r) {
    Node *n = malloc(sizeof(Node));
    n->c = c; n->freq = f; n->l = l; n->r = r;
    return n;
}


void pick_two(Node *arr[], int *n, Node **a, Node **b) {
    int i, min1 = 0, min2 = 1;
    if ((*n) < 2) return;
    if (arr[min2]->freq < arr[min1]->freq) { min1 = 1; min2 = 0; }
    for (i = 2; i < *n; i++) {
        if (arr[i]->freq < arr[min1]->freq) {
            min2 = min1;
            min1 = i;
        } else if (arr[i]->freq < arr[min2]->freq) {
            min2 = i;
        }
    }
    *a = arr[min1]; *b = arr[min2];

    if (min1 > min2) { int t = min1; min1 = min2; min2 = t; }
    for (i = min1; i < *n-1; i++) arr[i] = arr[i+1];
    for (i = min2-1; i < *n-2; i++) arr[i] = arr[i+1];
    *n -= 2;
}

char *codes[256];
char buf_code[256];
void build_codes(Node *root, int depth) {
    if (!root) return;
    if (!root->l && !root->r) {
        buf_code[depth] = 0;
        codes[root->c] = strdup(buf_code);
    } else {
        buf_code[depth] = '0';
        build_codes(root->l, depth+1);
        buf_code[depth] = '1';
        build_codes(root->r, depth+1);
    }
}

void huffmanCompress(FILE *in, FILE *out) {
    unsigned freq[256] = {0};
    int ch;
    rewind(in);
    while ((ch = fgetc(in)) != EOF) freq[ch]++;

    Node *arr[256];
    int n = 0, i;
    for (i = 0; i < 256; i++)
        if (freq[i]) arr[n++] = make_node(i, freq[i], NULL, NULL);

    while (n > 1) {
        Node *a, *b;
        pick_two(arr, &n, &a, &b);
        arr[n++] = make_node(0, a->freq + b->freq, a, b);
    }

    build_codes(arr[0], 0);

    rewind(in);
    while ((ch = fgetc(in)) != EOF) {
        fputs(codes[(unsigned char)ch], out);
    }
}

char *dict[MAX_DICT];
int dict_size;

int dict_find(const char *s) {
    int i;
    for (i = 0; i < dict_size; i++)
        if (strcmp(dict[i], s) == 0)
            return i;
    return -1;
}

void dict_init() {
    int i;
    for (i = 0; i < 256; i++) {
        dict[i] = malloc(2);
        dict[i][0] = i;
        dict[i][1] = 0;
    }
    dict_size = 256;
}

void lzwCompress(FILE *in, FILE *out) {
    char w[MAX_LINE] = "", wc[MAX_LINE], cstr[2];
    int k, ch;
    dict_init();
    while ((ch = fgetc(in)) != EOF) {
        cstr[0] = ch; cstr[1] = 0;
        strcpy(wc, w);
        strcat(wc, cstr);
        if (dict_find(wc) != -1) {
            strcpy(w, wc);
        } else {
            k = dict_find(w);
            fprintf(out, "%d ", k);
            if (dict_size < MAX_DICT) {
                dict[dict_size++] = strdup(wc);
            }
            strcpy(w, cstr);
        }
    }
    if (w[0]) {
        k = dict_find(w);
        fprintf(out, "%d", k);
    }
}

int main() {
    int choice;
    char inname[128], outname[128];
    FILE *in, *out;

    printf("Wybierz metodę kompresji:\n");
    printf("1) ByteRun (RLE)\n2) Huffman (0/1)\n3) LZW\n> ");
    if (scanf("%d", &choice)!=1) return 0;
    printf("Plik wejsciowy: "); scanf("%s", inname);
    printf("Plik wyjsciowy: "); scanf("%s", outname);

    in = fopen(inname, "rb");
    out = fopen(outname, "wb");
    if (!in || !out) {
        printf("Blad otwarcia plikow\n");
        return 1;
    }

    switch (choice) {
        case 1: byteRunCompress(in, out); break;
        case 2: huffmanCompress(in, out); break;
        case 3: lzwCompress(in, out); break;
        default: printf("Nieznany wybor\n");
    }

    fclose(in);
    fclose(out);
    return 0;
}