#include <stdio.h>
#include <math.h>

double calc_bij(double aij) {
    if (aij + 1 <= 0) return 3.31;
    return (pow(sin(aij),2) - 3) / sqrt(aij + 1);
}

int main() {
    int n,m,i,j;
    double A[50][50], B[50][50];

    printf("Podaj wymiary n m (max 50): ");
    if (scanf("%d %d",&n,&m)!=2) {
        printf("blad wejscia\n");
        return 1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%lf",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            B[i][j] = calc_bij(A[i][j]);
        }
    }
    printf("\nMacierz B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%6.2f ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}