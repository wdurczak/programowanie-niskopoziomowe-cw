#include <stdio.h>

int main() {
    long n, t, rev = 0;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    t = n;
    if (t < 0) t = -t;
    while (t) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }
    if (n == rev) printf("To palindrom\n");
    else        printf("To nie palindrom\n");
    return 0;
}