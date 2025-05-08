//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>

void naBinarna(int n) {
    if (n > 1) naBinarna(n / 2);
    printf("%d", n % 2);
}

int main() {
    int liczba, wybor;

    printf("podaj liczbe dziesietna: ");
    scanf("%d", &liczba);

    printf("1. binarny\n");
    printf("2. osemkowy\n");
    printf("3. szestnastkowy\n");
    printf("Wybor: ");
    scanf("%d", &wybor);

    printf("wynik: ");

    switch(wybor) {
        case 1:
            naBinarna(liczba);
        break;
        case 2:
            printf("%o", liczba);
        break;
        case 3:
            printf("%X", liczba);
        break;
        default:
            printf("blad\n");
    }

    printf("\n");
    return 0;
}