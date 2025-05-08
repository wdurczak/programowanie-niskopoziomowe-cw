#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Podaj n: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Liczba %d jest pierwsza\n", n);
    else
        printf("Liczba %d nie jest pierwsza\n", n);

    return 0;
}