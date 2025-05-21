#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void cmdN(int *pn, double T[]) {
    int i;
    printf("Podaj liczbe elementow (n<100): ");
    scanf("%d", pn);
    if (*pn <= 0 || *pn > MAX) {
        printf("Nieprawidlowe n!\n");
        *pn = 0;
        return;
    }
    for (i = 0; i < *pn; i++) {
        printf("T[%d] = ", i);
        scanf("%lf", &T[i]);
    }
}

void cmdD(int n, double T[], double x) {
    int i;
    for (i = 0; i < n; i++) {
        T[i] += x;
    }
}

void cmdO(int n, double T[], double x) {
    int i;
    for (i = 0; i < n; i++) {
        T[i] -= x;
    }
}

void cmdW(int n, double T[]) {
    int i;
    printf("Zawartosc tablicy:\n");
    for (i = 0; i < n; i++) {
        printf("%6.2f ", T[i]);
        if ((i+1)%10 == 0) printf("\n");
    }
    printf("\n");
}

int main() {
    char opcja;
    double T[MAX];
    int n = 0, initialized = 0;
    double x;

    do {
        printf("\nWybierz opcje (N,D,O,W,K): ");
        scanf(" %c", &opcja);
        switch (opcja) {
            case 'N': case 'n':
                cmdN(&n, T);
                if (n > 0) initialized = 1;
                break;
            case 'D': case 'd':
                if (!initialized) {
                    printf("Najpierw musisz wykonac N!\n");
                } else {
                    printf("Podaj x do dodania: ");
                    scanf("%lf", &x);
                    cmdD(n, T, x);
                }
                break;
            case 'O': case 'o':
                if (!initialized) {
                    printf("Najpierw musisz wykonac N!\n");
                } else {
                    printf("Podaj x do odjecia: ");
                    scanf("%lf", &x);
                    cmdO(n, T, x);
                }
                break;
            case 'W': case 'w':
                if (!initialized) {
                    printf("Najpierw musisz wykonac N!\n");
                } else {
                    cmdW(n, T);
                }
                break;
            case 'K': case 'k':
                printf("Koniec programu.\n");
                break;
            default:
                printf("Nieznana opcja!\n");
        }
    } while (opcja != 'K' && opcja != 'k');

    return 0;
}