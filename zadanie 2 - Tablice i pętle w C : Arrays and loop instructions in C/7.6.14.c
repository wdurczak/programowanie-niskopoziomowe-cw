#include <stdio.h>

int main() {
    long n, tmp;
    printf("Podaj liczbe: ");
    scanf("%ld", &n);
    if (n < 0) { putchar('-'); tmp = -n; }
    else tmp = n;
    long rev=0;
    int offs = 1;
    while (tmp) {
        int d = tmp % 10;
        int v = d + offs;
        int base = (v<10?10:(v<100?100:1000));
        rev = rev * base + v;
        tmp /= 10;
        offs++;
    }
    if (rev==0) putchar('1');
    while (rev) {
        putchar('0'+(rev%10));
        rev/=10;
    }
    putchar('\n');
    return 0;
}