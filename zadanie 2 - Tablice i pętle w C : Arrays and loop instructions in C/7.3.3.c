#include <stdio.h>

int main() {
    double x, y, z;
    while (1) {
        printf("podaj dlugosc krawedzi x: ");
        if (scanf("%lf", &x) != 1) {
            printf("to nie jest liczba.\n");
            while (getchar() != '\n');
            continue;
        }
        if (x <= 0) {
            printf("musi byc dodatnia.\n");
            continue;
        }
        break;
    }
    while (1) {
        printf("podaj dlugosc krawedzi y: ");
        if (scanf("%lf", &y) != 1) {
            printf("to nie jest liczba.\n");
            while (getchar() != '\n');
            continue;
        }
        if (y <= 0) {
            printf("musi byc dodatnia.\n");
            continue;
        }
        break;
    }
    while (1) {
        printf("podaj dlugosc krawedzi z: ");
        if (scanf("%lf", &z) != 1) {
            printf("to nie jest liczba.\n");
            while (getchar() != '\n');
            continue;
        }
        if (z <= 0) {
            printf("musi byc dodatnia.\n");
            continue;
        }
        break;
    }

    double objetosc = x * y * z;
    printf("Objetosc prostopadloscianu: %.2f\n", objetosc);
    return 0;
}