//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
    int val;
    struct StackNode* next;
} StackNode;

StackNode* push(StackNode* top, int val) {
    StackNode* nowy = malloc(sizeof(StackNode));
    nowy->val = val;
    nowy->next = top;
    return nowy;
}

StackNode* pop(StackNode* top, int* val) {
    if (top) {
        *val = top->val;
        StackNode* tmp = top;
        top = top->next;
        free(tmp);
    }
    return top;
}

typedef struct Node {
    int val;
    struct Node* next;
} Node;

Node* dodaj1K(Node* head, int val) {
    Node* nowy = malloc(sizeof(Node));
    nowy->val = val;
    nowy->next = NULL;
    if (!head) return nowy;
    Node* p = head;
    while (p->next) p = p->next;
    p->next = nowy;
    return head;
}

Node* usun1K(Node* head, int val) {
    if (!head) return NULL;
    if (head->val == val) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
        return head;
    }
    Node* p = head;
    while (p->next && p->next->val != val) p = p->next;
    if (p->next) {
        Node* tmp = p->next;
        p->next = tmp->next;
        free(tmp);
    }
    return head;
}

Node* znajdz1K(Node* head, int val) {
    while (head) {
        if (head->val == val) return head;
        head = head->next;
    }
    return NULL;
}

typedef struct DNode {
    int val;
    struct DNode* prev;
    struct DNode* next;
} DNode;

DNode* dodaj2K(DNode* head, int val) {
    DNode* nowy = malloc(sizeof(DNode));
    nowy->val = val;
    nowy->next = NULL;
    nowy->prev = NULL;
    if (!head) return nowy;
    DNode* p = head;
    while (p->next) p = p->next;
    p->next = nowy;
    nowy->prev = p;
    return head;
}

DNode* usun2K(DNode* head, int val) {
    DNode* p = head;
    while (p && p->val != val) p = p->next;
    if (!p) return head;
    if (p->prev) p->prev->next = p->next;
    else head = p->next;
    if (p->next) p->next->prev = p->prev;
    free(p);
    return head;
}

DNode* znajdz2K(DNode* head, int val) {
    while (head) {
        if (head->val == val) return head;
        head = head->next;
    }
    return NULL;
}

typedef struct BNode {
    int val;
    struct BNode* left;
    struct BNode* right;
} BNode;

BNode* bstDodaj(BNode* root, int val) {
    if (!root) {
        BNode* nowy = malloc(sizeof(BNode));
        nowy->val = val;
        nowy->left = nowy->right = NULL;
        return nowy;
    }
    if (val < root->val)
        root->left = bstDodaj(root->left, val);
    else
        root->right = bstDodaj(root->right, val);
    return root;
}

BNode* bstZnajdz(BNode* root, int val) {
    if (!root || root->val == val) return root;
    if (val < root->val) return bstZnajdz(root->left, val);
    return bstZnajdz(root->right, val);
}

BNode* bstMin(BNode* root) {
    while (root && root->left) root = root->left;
    return root;
}

BNode* bstUsun(BNode* root, int val) {
    if (!root) return NULL;
    if (val < root->val)
        root->left = bstUsun(root->left, val);
    else if (val > root->val)
        root->right = bstUsun(root->right, val);
    else {
        if (!root->left) {
            BNode* tmp = root->right;
            free(root);
            return tmp;
        } else if (!root->right) {
            BNode* tmp = root->left;
            free(root);
            return tmp;
        }
        BNode* min = bstMin(root->right);
        root->val = min->val;
        root->right = bstUsun(root->right, min->val);
    }
    return root;
}

int main() {
    StackNode* stos = NULL;
    Node* lista1K = NULL;
    DNode* lista2K = NULL;
    BNode* bst = NULL;

    int opcja, typ, val, wynik;

    while (1) {
        printf("1. Dodaj\n2. Usun\n3. Znajdz\n0. Wyjdz\nWybor: ");
        scanf("%d", &opcja);
        if (opcja == 0) break;
        printf("struktura: 1=Stos 2=1K 3=2K 4=BST\nTyp: ");
        scanf("%d", &typ);
        printf("wartosc: ");
        scanf("%d", &val);

        switch(opcja) {
            case 1:
                if (typ == 1) stos = push(stos, val);
                else if (typ == 2) lista1K = dodaj1K(lista1K, val);
                else if (typ == 3) lista2K = dodaj2K(lista2K, val);
                else if (typ == 4) bst = bstDodaj(bst, val);
                break;
            case 2:
                if (typ == 1) stos = pop(stos, &wynik);
                else if (typ == 2) lista1K = usun1K(lista1K, val);
                else if (typ == 3) lista2K = usun2K(lista2K, val);
                else if (typ == 4) bst = bstUsun(bst, val);
                break;
            case 3:
                if (typ == 1) printf("nie mozna przeszukac stosu.\n");
                else if (typ == 2) printf("%s\n", znajdz1K(lista1K, val) ? "znaleziono" : "brak");
                else if (typ == 3) printf("%s\n", znajdz2K(lista2K, val) ? "znaleziono" : "brak");
                else if (typ == 4) printf("%s\n", bstZnajdz(bst, val) ? "znaleziono" : "brak");
                break;
        }
    }

    return 0;
}