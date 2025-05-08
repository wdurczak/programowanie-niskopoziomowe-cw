#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc trojkata: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {

        for (int j = 0; j < h - i; j++)
            putchar(' ');

        for (int j = 0; j < i; j++)
            putchar('X');
        putchar('\n');
    }
    return 0;
}