#include <stdio.h>
#include <math.h>

int main() {
    int h;
    printf("podaj wysokosc: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        int base = (int)pow(2, i);
        for (int j = 0; j < i; j++) {
            printf("%d,", base + j);
        }
        putchar('\n');
    }
    return 0;
}