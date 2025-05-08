#include <stdio.h>
#include <math.h>

int main() {
    float a, b, R;

    printf("podaj liczby a i b float: ");
    scanf("%f %f", &a, &b);

    float licznik = a - b - 1;
    float mianownik = a * a + b * b + 1;

    R = 4 * a + 2 * (licznik / mianownik);

    printf("wartosc R = %.4f\n", R);
    return 0;
}