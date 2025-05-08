#include <stdio.h>

int main() {
    long n;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) { putchar('-'); n = -n; }
    if (n == 0) putchar('0');
    while (n) {
        putchar('0' + (n % 10));
        n /= 10;
    }
    putchar('\n');
    return 0;
}