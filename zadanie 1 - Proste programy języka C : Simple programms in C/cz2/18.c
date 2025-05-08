//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>

int main() {
    int n;
    long long k = 1;
    printf("podaj liczbę całkowitą n (n > 1): ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("n musi być większe niż 1.\n");
        return 1;
    }
    for (int i = 1; i < n; i++) {
        k *= (i * i + 1);
    }
    printf("wartość iloczynu k= %lld\n", k);
    return 0;
}