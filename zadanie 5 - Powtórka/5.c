#include <stdio.h>
#include <stdlib.h>

double max_elem(double *T, int n) {
    int i; double m = T[0];
    for(i=1;i<n;i++)
        if(T[i] > m) m = T[i];
    return m;
}

double min_elem(double *T, int n) {
    int i; double m = T[0];
    for(i=1;i<n;i++)
        if(T[i] < m) m = T[i];
    return m;
}

double avg_elem(double *T, int n) {
    int i; double sum = 0;
    for(i=0;i<n;i++)
        sum += T[i];
    return sum / n;
}

int main() {
    int n, i, op;
    double *T;
    double (*fun[3])(double*,int) = { max_elem, min_elem, avg_elem };

    printf("Podaj liczbe elementow n: ");
    if(scanf("%d",&n)!=1 || n<=0) {
        printf("blad n\n");
        return 1;
    }
    T = malloc(n * sizeof(double));
    if(!T) {
        printf("brak pamieci\n");
        return 1;
    }

    for(i=0;i<n;i++){
        printf("T[%d] = ", i);
        scanf("%lf", &T[i]);
    }

    while(1){
        printf("\nWybierz operacje (0-max,1-min,2-srednia, inna-koniec): ");
        if(scanf("%d",&op)!=1) break;
        if(op<0 || op>2) break;
        printf("Wynik = %f\n", fun[op](T,n));
    }

    free(T);
    printf("Koniec programu.\n");
    return 0;
}