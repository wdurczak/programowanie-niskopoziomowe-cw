#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc trojkata: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        if (i == 1) {
            putchar('X');
        } else if (i == 2) {
            putchar('X');
            putchar('X');
        } else if (i < h) {
            putchar('X');
            for (int k = 0; k < i-2; k++) putchar(' ');
            putchar('X');
        } else {
            for (int k = 0; k < h; k++) putchar('X');
        }
        putchar('\n');
    }

    return 0;
}