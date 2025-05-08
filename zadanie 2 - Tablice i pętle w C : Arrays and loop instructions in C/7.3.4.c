#include <stdio.h>
#include <math.h>

int main() {
    double a;

    while (1) {
        printf("podaj liczbe nieujemna do pierwiastkowania: ");
        if (scanf("%lf", &a) != 1) {
            printf("to nie jest liczba.\n");
            while (getchar() != '\n');
            continue;
        }
        if (a < 0) {
            printf("iczba musi byc >= 0.\n");
            continue;
        }
        break;
    }

    double w = sqrt(a);
    printf("pierwiastek kwadratowy z %.2f = %.4f\n", a, w);
    return 0;
}