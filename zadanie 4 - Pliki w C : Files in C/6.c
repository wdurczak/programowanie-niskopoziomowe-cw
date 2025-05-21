//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    FILE *f = fopen("input.txt", "r");
    char line[1024];

    if (!f) {
        printf("blad otwarcia pliku\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        char *tok = strtok(line, " \t\n");
        while (tok) {
            double num = atof(tok);
            printf("%.2f ", fabs(num));
            tok = strtok(NULL, " \t\n");
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}