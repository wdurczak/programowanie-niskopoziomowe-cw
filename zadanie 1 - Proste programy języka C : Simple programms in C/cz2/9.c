//
// Created by Wojciech Durczak on 06/04/2025.
//
#include<stdio.h>

int main() {

    double p, q;
    printf("podaj p i q ");
    scanf("%lf %lf", &p, &q);
    printf("p+q = %.4lf\n", p + q);
    printf("p-q = %.4lf\n", p - q);
    printf("p*q = %.4lf\n", p * q);
    if (q != 0.0)
        printf("p / q = %.4lf\n", p / q);
    else
        printf("nie dziel przez zero\n");
    return 0;
}