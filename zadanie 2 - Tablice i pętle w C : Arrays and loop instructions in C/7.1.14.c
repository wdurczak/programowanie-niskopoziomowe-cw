#include <stdio.h>

int main() {
    int n;
    printf("podaj dlugosc boku kwadratu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            putchar('K');
        putchar('\n');
    }
    return 0;
}