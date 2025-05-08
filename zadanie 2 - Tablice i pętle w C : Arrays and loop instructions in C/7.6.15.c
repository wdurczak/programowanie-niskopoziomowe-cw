#include <stdio.h>

int main() {
    long n, tmp;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) putchar('-'), tmp = -n;
    else tmp = n;
    long rev=0;
    while (tmp) {
        int d = tmp % 10;
        int v = (d*d) % 10;
        rev = rev*10 + v;
        tmp /= 10;
    }
    if (rev==0) putchar('0');
    while (rev) {
        putchar('0'+(rev%10));
        rev /= 10;
    }
    putchar('\n');
    return 0;
}