//
// Created by Wojciech Durczak on 06/04/2025.
//
#include<stdio.h>

#include <stdio.h>
#include <math.h>

int main() {
    double x, n;
    printf("podaj x: ");
    scanf("%lf", &x);
    double numerator = sin(pow(x, 3)) + 1.25;
    double denominator_argument = tan(x + 2);
    if (denominator_argument <= 0) {
        printf("logarytm z liczby <= 0\n");
    } else {
        double denominator =log(pow(denominator_argument, 2))+2.5;
        n = sqrt(numerator)/ denominator;
        printf("wartość wyrażenia n = %.4lf\n", n);
    }

    return 0;
}