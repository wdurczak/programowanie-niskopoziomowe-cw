//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>

int main() {
    int m, n;
    double t;
    printf("podaj m i n: ");
    scanf("%d %d", &m, &n);
    int numerator = 5 + (4+(3 + 2* (m- n - 1)));
    int denominator = (2 * (m+n +1) - 3) -4;
    if (denominator == 0) {
        printf("nie dziel przez zero\n");
    } else {
        t = (double)numerator / denominator - 5;
        printf("wartość wyrażenia T = %.4f\n", t);
    }
    return 0;
}