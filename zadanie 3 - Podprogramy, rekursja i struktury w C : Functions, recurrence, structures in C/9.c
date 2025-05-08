//
// Created by Wojciech Durczak on 08/05/2025.
//
#include <stdio.h>

int sumaCyfr(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumaCyfr(n / 10);
}

int main() {
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    printf("Suma cyfr: %d\n", sumaCyfr(n));
    return 0;
}