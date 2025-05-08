#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc trojkata: ");
    scanf("%d", &h);
    for (int i = 1; i <= h; i++) {
        for (int j = 0; j < h - i; j++)
            putchar(' ');
        if (i == 1) {
            putchar('X');
        }
        else if (i == 2) {
            putchar('X');
            putchar('X');
        }
        else if (i < h) {
            putchar('X');
            for (int j = 0; j < i - 2; j++)
                putchar(' ');
            putchar('X');
        }
        else {
            for (int j = 0; j < h; j++)
                putchar('X');
        }

        putchar('\n');
    }
    return 0;
}