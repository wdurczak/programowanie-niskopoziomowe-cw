//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    double x,s=0,p=1;
    printf("ile liczb: ");
    scanf("%d",&n);
    if(n<=0) {
        printf("zle n\n");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("liczba %d: ",i+1);scanf("%lf",&x);
        if(x<=0) {
            printf("ma byc >0\n")
            ;return 1;
        }
        s+=x;p*=x;
    }
    printf("srednia a=%.4f\n",s/n);
    printf("srednia g=%.4f\n",pow(p,1.0/n));
    return 0;
}