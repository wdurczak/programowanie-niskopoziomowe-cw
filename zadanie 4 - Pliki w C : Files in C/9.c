#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char line[1024];
    int total = 0;

    if (!f) {
        printf("blad: nie moge otworzyc pliku\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        if (line[0] == ';')
            continue;

        int in_word = 0;
        for (int i = 0; line[i]; i++) {
            char c = line[i];
            if (c!=' ' && c!='\t' && c!='\n') {
                if (!in_word) {
                    total++;
                    in_word = 1;
                }
            } else {
                in_word = 0;
            }
        }
    }

    fclose(f);

    printf("%d\n", total);
    return 0;
}