#include <stdio.h>

int main() {
    long n;
    int sum = 0;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) n = -n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    printf("Suma cyfr: %d\n", sum);
    return 0;
}