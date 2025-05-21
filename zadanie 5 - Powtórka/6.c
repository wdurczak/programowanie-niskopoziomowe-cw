#include <stdio.h>
#define MAX 15

void fillR(int n,int m,double A[][MAX],double B[][MAX],int R[][MAX]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]==B[i][j]) R[i][j]=1;
            else                 R[i][j]=0;
        }
    }
}
void fillP(int n,int m,double A[][MAX],double B[][MAX],int P[][MAX]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]>B[i][j])  P[i][j]=1;
            else                 P[i][j]=0;
        }
    }
}

int main(){
    int n,m,i,j;
    double A[MAX][MAX], B[MAX][MAX];
    int R[MAX][MAX], P[MAX][MAX];

    printf("Podaj wymiary n m (<=%d): ", MAX);
    scanf("%d %d",&n,&m);
    if(n<1||n>MAX||m<1||m>MAX){
        printf("Bledne wymiary!\n");
        return 1;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%lf",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("B[%d][%d] = ", i, j);
            scanf("%lf",&B[i][j]);
        }
    }

    fillR(n,m,A,B,R);
    fillP(n,m,A,B,P);

    printf("\nMacierz R (rownosci):\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    printf("\nMacierz P (przewagi):\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}