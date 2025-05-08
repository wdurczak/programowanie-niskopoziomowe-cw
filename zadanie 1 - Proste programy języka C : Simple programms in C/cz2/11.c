//
// Created by Wojciech Durczak on 06/04/2025.
//
#include<stdio.h>

int main() {
    float a, b, R;
    printf("podaj a i b ");
    scanf("%f %f", &a, &b);
    R = 4 * a + 2 * (a - b - 1) / (a * a + b * b + 1);
    printf("wyrażenie R= %.4f\n", R);

    return 0;
}