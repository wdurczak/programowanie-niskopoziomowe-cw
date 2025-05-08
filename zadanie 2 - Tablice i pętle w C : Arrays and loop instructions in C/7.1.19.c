#include <stdio.h>

int main() {
    int n;
    printf("podaj ilosc: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d", i * 3);
        if (i < n - 1) printf(", ");
    }
    putchar('\n');
    return 0;
}