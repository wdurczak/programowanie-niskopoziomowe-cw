#include <stdio.h>

int main() {
    int t, h, w;
    printf("podaj grubosc, wysokosc i szerokosc litery L: ");
    scanf("%d %d %d", &t, &h, &w);


    for (int i = 0; i < h; i++) {
        for (int j = 0; j < t; j++)
            putchar('L');
        putchar('\n');
    }

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < w; j++)
            putchar('L');
        putchar('\n');
    }
    return 0;
}