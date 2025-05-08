//
// Created by Wojciech Durczak on 06/04/2025.
//
#include<stdio.h>

int main() {
    int a;
    char c;
    printf("podaj liczbę i znak ");
    scanf("%d", &a);
    fflush(stdin);
    scanf(" %c", &c);
    printf("liczba = %d; znak = %c\n", a, c);
    return 0;
}