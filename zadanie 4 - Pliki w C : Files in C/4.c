//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>
#include <string.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char line[1024];
    char max[1024] = "", min[1024] = "";
    int first = 1;

    if (!f) {
        printf("blad otwierania pliku\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        line[strcspn(line, "\n")] = 0;
        if (first) {
            strcpy(max, line);
            strcpy(min, line);
            first = 0;
        } else {
            if (strlen(line) > strlen(max)) strcpy(max, line);
            if (strlen(line) < strlen(min)) strcpy(min, line);
        }
    }

    fclose(f);
    printf("najdluzszy: %s\n", max);
    printf("najkrotszy: %s\n", min);

    return 0;
}