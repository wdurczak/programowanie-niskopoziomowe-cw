//
// Created by Wojciech Durczak on 23/03/2025.
//

#include<stdio.h>

int main(){
    char k;
    double t,w;
    printf("c - celsjusz -> fahrenheit\nf - fahrenheit -> celsjusz\nwybierz (c/f):");
    scanf(" %c",&k);
    if(k=='c'){
        printf("podaj temp w C:");scanf("%lf",&t);
        w=9.0/5*t+32;
        printf("wynik: %.1f F\n",w);
    }
    else if(k=='f'){
        printf("podaj temp w F:");scanf("%lf",&t);
        w=5.0/9*(t-32);
        printf("wynik:%.1f C\n",w);
    }
    else{
        printf("blad wyboru\n");
    }
    return 0;
}