//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>

int main() {
    char filename[] = "input.txt";
    char target;
    int count = 0;
    FILE *file = fopen(filename, "r");

    if (!file) {
        printf("nie można otworzyć pliku\n");
        return 1;
    }

    printf("podaj znak do zliczenia ");
    scanf(" %c", &target);

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == target)
            count++;
    }

    fclose(file);
    printf("znak '%c' występuje %d razy.\n", target, count);
    return 0;
}