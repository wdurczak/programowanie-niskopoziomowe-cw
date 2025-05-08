//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>
#include <math.h>

int main() {
    double x, y, t;
    printf("podaj x i y: ");
    scanf("%lf %lf", &x, &y);
    if (x - 5<= 0 || y < 0 || (sqrt(y) -3) == 0) {
        printf("brak rozwiązania.\n");
        return 1;
    }
    t = (log(x - 5) + 1) / (sqrt(y) - 3);
    printf("wartość wyrażenia t = %.4lf\n", t);

    return 0;
}