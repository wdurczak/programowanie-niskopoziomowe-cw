//
// Created by Wojciech Durczak on 06/05/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

typedef union {
    int i;
    char c;
    float f;
} Bag;

typedef struct {
    int typ;
    Bag d;
} Elem;

int main() {
    Elem t[N];
    srand(time(0));

    for(int i=0;i<N;i++){
        t[i].typ=rand()%3;
        if(t[i].typ==0) t[i].d.i=rand()%100;
        else if(t[i].typ==1) t[i].d.c='A'+rand()%26;
        else t[i].d.f=(rand()%10000)/100.0f;
    }

    for(int i=0;i<N;i++){
        printf("%d: ",i);
        if(t[i].typ==0) printf("int=%d\n",t[i].d.i);
        else if(t[i].typ==1) printf("char=%c\n",t[i].d.c);
        else printf("float=%.2f\n",t[i].d.f);
    }

    return 0;
}