//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>
#include <math.h>

int main() {
    double x, y, k;
    printf("podaj x i y: ");
    scanf("%lf %lf", &x, &y);
    double numerator, denominator;
    if (10 * x + 2 <= 0 || 10 * y - 2 <= 0) {
        printf("logarytm z liczby <= 0\n");
        return 1;
    }
    numerator = 4 * sin(x + 12.5) -pow(y, 3) *(cos(x * y) *(5 *x + 2 * y -1));
    double ln_diff = log(10 * x + 2) - log(10 * y - 2);
    double sqrt_expr = sqrt(pow(x, 4) + pow(y, 4) + 1);
    denominator = ln_diff / sqrt_expr;
    if (denominator == 0) {
        printf("nie dziel przez zsero\n");
        return 1;
    }
    k = numerator / denominator;
    printf("wartość wyrażenia k = %.4lf\n", k);
    return 0;
}