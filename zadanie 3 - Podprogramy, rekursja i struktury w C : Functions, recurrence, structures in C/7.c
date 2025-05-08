//
// Created by Wojciech Durczak on 08/05/2025.
//
#include <stdio.h>

void odwrocZnaki() {
    char znak = getchar();
    if (znak != '\n') {
        odwrocZnaki();
        putchar(znak);
    }
}

int main() {
    printf("wpisz znaki: ");
    odwrocZnaki();
    printf("\n");
    return 0;
}