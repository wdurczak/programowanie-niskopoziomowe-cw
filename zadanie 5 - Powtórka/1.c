#include <stdio.h>
#include <math.h>

double calc_sij(int i, int j, double a, double b) {
    double num = a*i - b*j;
    double den = b*i - j + a;
    if (num < 0 || den <= 0) {
        return 1.03;
    }
    return sqrt(num) / log(den);
}

int main() {
    int n, m, i, j;
    double a, b, S=0.0;

    printf("podaj n m a b:\n");
    if (scanf("%d %d %lf %lf", &n, &m, &a, &b) != 4) {
        printf("blad wczytywania\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            S += calc_sij(i, j, a, b);
        }
    }

    printf("wynik S = %f\n", S);
    return 0;
}