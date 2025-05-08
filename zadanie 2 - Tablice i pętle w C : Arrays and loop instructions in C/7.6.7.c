#include <stdio.h>

int main() {
    long n;
    int ok = 1;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) n = -n;
    if (n == 0) ok = 1;
    while (n && ok) {
        int d = n % 10;
        if (d % 2 != 0) ok = 0;
        n /= 10;
    }
    printf(ok ? "Wszystkie parzyste\n" : "Nie wszystkie parzyste\n");
    return 0;
}