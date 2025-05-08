#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc trojkata: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        int stars = 2*i - 1;
        int spaces = h - i;
        for (int k = 0; k < spaces; k++) putchar(' ');
        if (i == 1) {
            putchar('X');
        } else if (i == h) {
            for (int k = 0; k < stars; k++) putchar('X');
        } else {
            putchar('X');
            for (int k = 0; k < stars-2; k++) putchar(' ');
            putchar('X');
        }
        putchar('\n');
    }

    return 0;
}