//
// Created by Wojciech Durczak on 25/03/2025.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encode(char* tekst, int klucz) {
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (isalpha(tekst[i])) {
            char baza=isupper(tekst[i]) ? 'A' : 'a';
            tekst[i] =(tekst[i] - baza + klucz) % 26 + baza;
        }
    }
}

void decode(char* tekst,int klucz) {
    encode(tekst, 26 -(klucz % 26));
}

int main() {
    char tekst[256];
    int klucz;
    char tryb;
    printf("wpisz tekst do zaszyfrowania/deszyfrowania ");
    fgets(tekst, sizeof(tekst), stdin);
    tekst[strcspn(tekst, "\n")] = 0;
    printf("podaj klucz: ");
    scanf("%d", &klucz);
    printf("tryb (s - szyfruj, d - deszyfruj): ");
    scanf(" %c", &tryb);
    if (tryb=='s') {
        encode(tekst, klucz);
        printf("aszyfrowany tekst: %s\n", tekst);
    } else if (tryb == 'd') {
        decode(tekst, klucz);
        printf("odszyfrowany tekst: %s\n", tekst);
    } else {
        printf("nieznany tryb\n");
    }
    return 0;
}