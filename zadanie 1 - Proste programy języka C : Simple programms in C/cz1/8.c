//
// Created by Wojciech Durczak on 23/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    double a1,b1,a2,b2,x,y,d;
    printf("a1 b1: ");scanf("%lf%lf",&a1,&b1);
    printf("a2 b2: ");scanf("%lf%lf",&a2,&b2);

    if(a1==a2){printf("rownolegle\n");return 0;}

    x=(b2-b1)/(a1-a2);
    y=a1*x+b1;
    d=sqrt(x*x+y*y);

    printf("przeciecie:(%.2f,%.2f)\n",x,y);
    printf("odl. od (0,0): %.2f\n",d);
    return 0;
}