#include <stdio.h>
#include <math.h>

int main() {
    long a, b;
    printf("Podaj a i b: ");
    scanf("%ld %ld", &a, &b);
    if (a > b) { long t = a; a = b; b = t; }
    for (long n = a; n <= b; n++) {
        long r = (long)sqrt(n);
        if (r*r == n) {
            long mod = 1;
            while (mod <= r) mod *= 10;
            if (n % mod == r)
                printf("%ld\n", n);
        }
    }
    return 0;
}