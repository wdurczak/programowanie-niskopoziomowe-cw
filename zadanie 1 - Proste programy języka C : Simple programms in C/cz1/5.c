//
// Created by Wojciech Durczak on 23/03/2025.
//
#include <stdio.h>
#include <math.h>

int main() {
    double x, N;
    printf("wproawdz x: ");
    scanf("%lf", &x);
    double numerator_inner = pow(sin(pow(x,3)),2) +1.25;
    double denominator_inner = pow(cos(pow(x,2)), 3) +1.25;
    double numerator= sqrt(numerator_inner/denominator_inner);
    double tan_squared=pow(tan(x + 2), 2);
    double denominator=log(tan_squared) + 2.5;
    if (denominator == 0||tan(x + 2) == 0||tan_squared <= 0) {
        printf("nieprawidłowe dane 0 lub logarytm <=0\n");
    } else {
        N =numerator/denominator;
        printf("wartosc N = %.4f\n", N);
    }
    return 0;
}