#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void opcjaA(int n, double T[]) {
    int i;
    for(i = 0; i < n; i++)
        T[i] = -T[i];
}

void opcjaB(int n, double T[]) {
    int i;
    double f = T[0];
    for(i = 1; i < n; i++)
        T[i] *= f;
}

int main() {
    int n, i;
    double *T;
    char opc;

    printf("Podaj dlugosc tablicy (>25): ");
    if(scanf("%d", &n) != 1 || n <= 25) {
        printf("Nieprawidlowe n\n");
        return 1;
    }

    T = malloc(n * sizeof(double));
    if(!T) return 1;

    for(i = 0; i < n; i++)
        scanf("%lf", &T[i]);

    printf("Wybierz opcje (A – odwroc znaki, B – pomnoz przez T[0]): ");
    scanf(" %c", &opc);

    if(opc == 'A' || opc == 'a')
        opcjaA(n, T);
    else if(opc == 'B' || opc == 'b')
        opcjaB(n, T);
    else {
        printf("Nieznana opcja\n");
        free(T);
        return 1;
    }

    for(i = 0; i < n; i++)
        printf("%f ", T[i]);
    printf("\n");

    free(T);
    return 0;
}