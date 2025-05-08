#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc trojkata: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        for (int k = 0; k < i; k++)
            putchar('X');
        putchar('\n');
    }

    return 0;
}