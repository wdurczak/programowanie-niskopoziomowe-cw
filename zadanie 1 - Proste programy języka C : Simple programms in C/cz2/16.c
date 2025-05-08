//
// Created by Wojciech Durczak on 06/04/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int liczba, strzal;
    bool probowane[10] = { false };
    srand(time(NULL));
    liczba = rand() % 10;
    printf("zgadnij liczbę z zakresu 0–9.\n");
    while (1) {
        printf("podaj liczbę: ");
        scanf("%d", &strzal);
        if (strzal < 0 || strzal > 9) {
            printf("liczba poza zakresem!\n");
            continue;
        }

        if (probowane[strzal]) {
            printf("już próbowałeś tej liczby!\n");
        } else {
            probowane[strzal] = true;
        }

        if (strzal == liczba) {
            printf("suckes! trafiłeś!\n");
            break;
        }
        printf("Spróbuj ponownie.\n");
    }

    return 0;
}