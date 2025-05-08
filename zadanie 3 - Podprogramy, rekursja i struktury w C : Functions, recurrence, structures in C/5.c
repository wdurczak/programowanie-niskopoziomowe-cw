//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>


int mnoz(int a, int b) {
    if (b == 0) return 0;
    return a + mnoz(a, b - 1);
}

int poteguj(int a, int b) {
    if (b == 0) return 1;
    return mnoz(a, poteguj(a, b - 1));
}

int main() {
    int a, b;
    printf("Podaj liczbe i wykladnik: ");
    scanf("%d %d", &a, &b);

    int wynik = poteguj(a, b);
    printf("%d^%d = %d\n", a, b, wynik);
    return 0;
}