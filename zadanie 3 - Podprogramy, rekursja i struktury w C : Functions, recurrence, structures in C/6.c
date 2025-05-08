//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>

int silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}

int main() {
    int n;
    printf("podaj liczbe: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("nie moze byc ujemnye\n");
    } else {
        printf("%d! = %d\n", n, silnia(n));
    }

    return 0;
}