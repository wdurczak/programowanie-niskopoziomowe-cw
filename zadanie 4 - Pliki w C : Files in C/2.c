//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>

int main() {
    unsigned int a, b, result;
    char op;

    printf("podaj pierwszą liczbę szesnastkową: ");
    scanf("%x", &a);

    printf("podaj operator (+, -, *): ");
    scanf(" %c", &op);

    printf("podaj drugą liczbę szesnastkową: ");
    scanf("%x", &b);

    switch(op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        default:
            printf("nieznany operator.\n");
        return 1;
    }

    printf("wynik: %X\n", result);
    return 0;
}