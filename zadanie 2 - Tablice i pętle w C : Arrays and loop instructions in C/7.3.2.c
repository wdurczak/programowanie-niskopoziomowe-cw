#include <stdio.h>

int main() {
    double a, b;

    while (1) {
        printf("podaj dlugosc boku a prostokata: ");
        if (scanf("%lf", &a) != 1) {
            printf(" podaj wartosc rzeczywista.\n");
            while (getchar() != '\n');
            continue;
        }
        if (a <= 0) {
            printf("dlugosc musi byc dodatnia.\n");
            continue;
        }
        break;
    }

    while (1) {
        printf("podaj dlugosc boku b prostokata: ");
        if (scanf("%lf", &b) != 1) {
            printf("podaj wartosc rzeczywista.\n");
            while (getchar() != '\n');
            continue;
        }
        if (b <= 0) {
            printf("dlugosc musi byc dodatnia.\n");
            continue;
        }
        break;
    }

    double pole = a * b;
    printf("pole prostokata: %.2f\n", pole);
    return 0;
}