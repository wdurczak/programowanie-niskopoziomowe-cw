#include <stdio.h>
#include <math.h>

int main() {
    long n;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) n = -n;
    long r = (long)sqrt(n);
    if (r * r == n) {
    \
        long mod = 1;
        while (mod <= r) mod *= 10;
        if (n % mod == r)
            printf("Tak, %ld konczy sie %ld\n", n, r);
        else
            printf("Nie konczy sie %ld\n", r);
    } else {
        printf("Nie jest kwadratem\n");
    }
    return 0;
}