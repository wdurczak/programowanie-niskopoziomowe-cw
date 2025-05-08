//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>

int main() {
    float dlugosc, szerokosc, wysokosc;
    printf("podaj długość, szerokość i wysokość (cm): ");
    scanf("%f %f %f", &dlugosc, &szerokosc, &wysokosc);
    float objetosc = dlugosc *szerokosc * wysokosc;
    printf("objętość skrzyni (%%f): %.2f litrów\n", objetosc /1000.0);
    printf("objętość skrzyni (%%e): %e litrów\n", objetosc / 1000.0);
    printf("objętość skrzyni (%%g): %g litrów\n", objetosc / 1000.0);
    return 0;
}