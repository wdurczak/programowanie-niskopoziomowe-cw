#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i * j);
            if (j < i) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
