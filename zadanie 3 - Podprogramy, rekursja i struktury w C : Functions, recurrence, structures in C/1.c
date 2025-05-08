#include <stdio.h>
#include <string.h>

#define MAX 10
#define NAZW 50

typedef struct {
    char n[NAZW];
    float p;
    float pr;
} Prac;

Prac pracs[MAX];
int ile = 0;

void dodaj() {
    if (ile ==MAX) {
        printf("Brak miejsca\n");
        return;
    }
    printf("Nazwisko: ");
    scanf("%s", pracs[ile].n);
    printf("Pensja: ");
    scanf("%f", &pracs[ile].p);
    printf("Premia%%: ");
    scanf("%f", &pracs[ile].pr);
    ile++;
}

void zm_pensja() {
    char szuk[NAZW];
    float nowa;
    printf("Nazwisko: ");
    scanf("%s", szuk);
    for (int i = 0; i< ile; i++) {
        if (!strcmp(pracs[i].n, szuk)) {
            printf("Nowa pensja: ");
            scanf("%f", &nowa);
            pracs[i].p = nowa;
            return;
        }
    }
    printf("Nie ma takiego\n");
}

void zm_premia() {
    char szuk[NAZW];
    float nowa;
    printf("Nazwisko: ");
    scanf("%s", szuk);
    for (int i = 0; i< ile; i++) {
        if (!strcmp(pracs[i].n, szuk)) {
            printf("Nowa premia%%: ");
            scanf("%f", &nowa);
            pracs[i].pr = nowa;
            return;
        }
    }
    printf("Nie ma takiego\n");
}

void wyplata() {
    float suma = 0;
    for (int i = 0;i< ile; i++) {
        suma += pracs[i].p + pracs[i].p * pracs[i].pr / 100;
    }
    printf("Do wypłaty: %.2f\n", suma);
}

int main() {
    char cmd;
    while (1) {
        printf("\nN-dodaj P-pensja R-premia W-wyplata K-koniec: ");
        scanf(" %c", &cmd);
        if (cmd == 'N') dodaj();
        else if (cmd =='P') zm_pensja();
        else if (cmd == 'R') zm_premia();
        else if (cmd == 'W') wyplata();
        else if (cmd == 'K') break;
        else printf("Zła komenda\n");
    }
    return 0;
}