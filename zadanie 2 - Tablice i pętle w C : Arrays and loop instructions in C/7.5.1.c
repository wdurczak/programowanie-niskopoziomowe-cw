#include <stdio.h>

int main() {
    double x;
    int n, i;
    double result = 1;

    printf("Podaj x i n: ");
    scanf("%lf %d", &x, &n);

    for (i = 0; i < n; i++)
        result *= x;

    printf("wynik: %g^%d = %g\n", x, n, result);
    return 0;
}