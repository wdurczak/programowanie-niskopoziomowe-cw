#include <stdio.h>
#include <string.h>

#define MAX_PLYT 100

typedef struct {
    char tytul[100];
    char autor[100];
    int rokWydania;
    char numerKatalogowy[50];
    char rodzajMuzyki[50];
} Plyta;

Plyta wczytajPlyte() {
    Plyta p;
    printf("Tytul: ");
    fgets(p.tytul, sizeof(p.tytul), stdin);
    p.tytul[strcspn(p.tytul, "\n")] = 0;

    printf("Autor: ");
    fgets(p.autor, sizeof(p.autor), stdin);
    p.autor[strcspn(p.autor, "\n")] = 0;

    printf("Rok wydania: ");
    scanf("%d", &p.rokWydania);
    getchar();

    printf("Numer katalogowy: ");
    fgets(p.numerKatalogowy, sizeof(p.numerKatalogowy), stdin);
    p.numerKatalogowy[strcspn(p.numerKatalogowy, "\n")] = 0;

    printf("Rodzaj muzyki: ");
    fgets(p.rodzajMuzyki, sizeof(p.rodzajMuzyki), stdin);
    p.rodzajMuzyki[strcspn(p.rodzajMuzyki, "\n")] = 0;

    return p;
}

void wyswietlPlyte(Plyta p) {
    printf("%-20s %-20s %-4d %-15s %-15s\n", p.tytul, p.autor, p.rokWydania, p.numerKatalogowy, p.rodzajMuzyki);
}

int porownaj(Plyta p1, Plyta p2, int parametr) {
    switch(parametr) {
        case 1: return strcmp(p1.tytul, p2.tytul);
        case 2: return strcmp(p1.autor, p2.autor);
        case 3: return p1.rokWydania - p2.rokWydania;
        case 4: return strcmp(p1.numerKatalogowy, p2.numerKatalogowy);
        case 5: return strcmp(p1.rodzajMuzyki, p2.rodzajMuzyki);
        default: return 0;
    }
}

void sortujPlyty(Plyta katalog[], int liczba, int parametr) {
    for (int i = 0; i < liczba - 1; i++) {
        for (int j = 0; j < liczba - i - 1; j++) {
            if (porownaj(katalog[j], katalog[j+1], parametr) > 0) {
                Plyta tmp = katalog[j];
                katalog[j] = katalog[j+1];
                katalog[j+1] = tmp;
            }
        }
    }
}

void pokazWszystkie(Plyta katalog[], int liczba) {
    printf("\n%-20s %-20s %-4s %-15s %-15s\n", "Tytul", "Autor", "Rok", "NumerKat", "Rodzaj");
    for (int i = 0; i < liczba; i++) {
        wyswietlPlyte(katalog[i]);
    }
}

void podmenuSortowania(Plyta katalog[], int liczba) {
    int opcja;

    printf("1. Tytul\n");
    printf("2. Autor\n");
    printf("3. Rok wydania\n");
    printf("4. Numer katalogowy\n");
    printf("5. Rodzaj muzyki\n");
    printf("Wybor: ");
    scanf("%d", &opcja);
    getchar();

    sortujPlyty(katalog, liczba, opcja);
    pokazWszystkie(katalog, liczba);
}

int main() {
    Plyta katalog[MAX_PLYT];
    int liczbaPlyt = 0;
    int wybor;

    do {
        printf("1. Dodaj plyte\n");
        printf("2. Wyswietl wszystkie\n");
        printf("3. Wyswietl (posortowane)\n");
        printf("0. Wyjscie\n");
        printf("Wybor: ");
        scanf("%d", &wybor);
        getchar();

        switch(wybor) {
            case 1:
                if (liczbaPlyt < MAX_PLYT) {
                    katalog[liczbaPlyt++] = wczytajPlyte();
                } else {
                    printf("Za duzo plyt!\n");
                }
                break;
            case 2:
                pokazWszystkie(katalog, liczbaPlyt);
                break;
            case 3:
                podmenuSortowania(katalog, liczbaPlyt);
                break;
            case 0:
                printf("Papa.\n");
                break;
            default:
                printf("Zla opcja.\n");
        }
    } while (wybor != 0);

    return 0;
}