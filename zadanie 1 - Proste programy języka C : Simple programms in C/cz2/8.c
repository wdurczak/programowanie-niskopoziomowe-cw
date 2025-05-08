//
// Created by Wojciech Durczak on 06/04/2025.
//
#include<stdio.h>

int main() {
    float dlugosc, szerokosc, wysokosc;
    printf("podaj długość, szerokość i wysokość (cm): ");
    scanf("%f %f %f", &dlugosc, &szerokosc, &wysokosc);
    float objetosc = dlugosc *szerokosc * wysokosc;
    printf("objętość skrzyni wynosi %.2f litrów\n",objetosc/1000.0);
    return 0;
}