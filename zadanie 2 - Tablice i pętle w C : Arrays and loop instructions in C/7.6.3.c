#include <stdio.h>

int main() {
    long n;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) n = -n;
    while (n >= 10) {
        long tmp = 0;
        while (n) {
            tmp += n % 10;
            n /= 10;
        }
        n = tmp;
    }
    printf("Wynik = %ld\n", n);
    return 0;
}