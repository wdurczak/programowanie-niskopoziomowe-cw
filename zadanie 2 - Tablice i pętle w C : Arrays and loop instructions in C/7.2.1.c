#include <stdio.h>

int main() {
    int i, j;

    printf("    |");
    for (j = 1; j <= 5; j++)
        printf("%4d", j);
    printf("\n");
    printf("----+--------------------\n");


    for (i = 1; i <= 5; i++) {
        printf("%2d  |", i);
        for (j = 1; j <= 5; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}