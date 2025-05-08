#include <stdio.h>

int main() {
    double a, b, c;

    printf("podaj trzy liczby: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("najwieksza liczba to: %.2lf\n", max);

    return 0;
}