#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc krzyza: ");
    scanf("%d", &h);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++)
            putchar(' ');
        putchar('#');
        putchar('\n');
    }
    for (int j = 0; j < 2*h+1; j++)
        putchar('#');
    putchar('\n');

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++)
            putchar(' ');
        putchar('#');
        putchar('\n');
    }

    return 0;
}