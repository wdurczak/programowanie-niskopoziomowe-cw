#include <stdio.h>

int main() {
    int szer, wys;
    printf("podaj szerokosc i wysokosc prostokata: ");
    scanf("%d %d", &szer, &wys);

    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < szer; j++) {
            putchar('X');
        }
        putchar('\n');
    }

    return 0;
}