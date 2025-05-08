#include <stdio.h>

int main() {
    int a, b;
    printf("podaj liczby a i b !=0: ");
    scanf("%d %d", &a, &b);

    int suma = a + b;
    if (suma == 0) {
        printf("a + b nie moze byc 0\n");
        return 1;
    }

    double wynik = (double)(a * suma) / (suma * suma);

    printf("wynik wyrazenia a*(a+b)/(a+b)^2 = %.4lf\n", wynik);
    return 0;
}