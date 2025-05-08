//
// Created by Wojciech Durczak on 06/04/2025.
//
#include <stdio.h>
#include <string.h>

int main() {
    char tekst[1000];
    int histogram[26] = {0};
    printf("podaj tekst (bez spacji tylko małe litery a-z): ");
    scanf("%s", tekst);
    for (int i = 0; i < strlen(tekst); i++) {
        char znak = tekst[i];
        if (znak >= 'a' && znak <= 'z') {
            histogram[znak - 'a']++;
        }
    }
    printf("\nhistogram wystąpień liter\n");
    for (int i = 0; i < 26; i++) {
        if (histogram[i] > 0) {
            printf("%c: %d\n", 'a' +i, histogram[i]);
        }
    }

    return 0;
}