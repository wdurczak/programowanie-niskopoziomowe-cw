#include <stdio.h>

int main() {
    long n;
    int count = 0;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n == 0) count = 1;
    else {
        if (n < 0) n = -n;
        while (n) {
            count++;
            n /= 10;
        }
    }
    printf("Liczba cyfr: %d\n", count);
    return 0;
}