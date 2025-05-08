//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,m,i;
    printf("n m: ");
    scanf("%d%d",&n,&m);
    if(n<=0 || m<0) {
        printf("zle\n");
        return 1;
    }
    srand(time(0));
    for(i=0;i<n;i++) {
        printf("%d ",rand()%(m+1));
    }
    printf("\n");
    return 0;
}