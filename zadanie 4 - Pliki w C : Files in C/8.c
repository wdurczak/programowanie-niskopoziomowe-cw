//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    FILE *f = fopen("input.txt", "r");
    int data[MAX_ROWS][MAX_COLS];
    int rows = 0, cols = 0;
    char line[1024];

    if (!f) {
        printf("blad otwarcia pliku\n");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        int col = 0;
        char *tok = strtok(line, " \n");
        while (tok) {
            data[rows][col++] = atoi(tok);
            tok = strtok(NULL, " \n");
        }
        if (col > cols) cols = col;
        rows++;
    }

    fclose(f);

    printf("Suma: ");
    for (int c = 0; c < cols; c++) {
        int sum = 0;
        for (int r = 0; r < rows; r++)
            sum += data[r][c];
        printf("%d ", sum);
    }
    printf("\n");

    printf("Srednia: ");
    for (int c = 0; c < cols; c++) {
        int sum = 0;
        for (int r = 0; r < rows; r++)
            sum += data[r][c];
        printf("%.1f ", (float)sum / rows);
    }
    printf("\n");

    return 0;
}