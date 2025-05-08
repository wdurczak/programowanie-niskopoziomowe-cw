#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        int start = (i - 1) * 3;
        for (int j = 0; j < i; j++) {
            printf("%d", start + j * 3);
            if (j < i - 1) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}