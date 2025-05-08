#include <stdio.h>

int isPal(long x) {
    long t = x, rev = 0;
    while (t) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }
    return rev == x;
}

int main() {
    long a, b;
    printf("Podaj a i b: ");
    scanf("%ld %ld", &a, &b);
    if (a > b) { long tmp = a; a = b; b = tmp; }
    for (long i = a; i <= b; i++)
        if (isPal(i))
            printf("%ld\n", i);
    return 0;
}