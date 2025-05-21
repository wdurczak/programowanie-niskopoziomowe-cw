//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>

#define MAX_LEVEL 10

int main() {
    FILE *f = fopen("input.txt", "r");
    char line[1024];
    int levels[MAX_LEVEL] = {0};

    if (!f) {
        printf("blad otwierania pliku\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        int i = 0;
        while (line[i] == '*') i++;

        if (i > 0 && line[i] == ' ') {
            levels[i - 1]++;
            for (int j = i; j < MAX_LEVEL; j++)
                levels[j] = 0;

            for (int j = 0; j < i; j++) {
                printf("%d", levels[j]);
                if (j < i - 1) printf(".");
            }
            printf(". %s", line + i + 1);
        } else {
            printf("%s", line);
        }
    }

    fclose(f);
    return 0;
}