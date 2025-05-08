
#include <stdio.h>

int main() {
    int h, w;
    printf("podaj wysokosc i szerokosc: ");
    scanf("%d %d", &h, &w);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (i == 1 || i == h || j == 1 || j == w)
                putchar('X');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}