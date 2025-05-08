//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    double d,x1,x2;

    printf("a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0) {
        printf("nie kwadrat\n");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>0){
        x1=(-b-sqrt(d))/(2.0*a);
        x2=(-b+sqrt(d))/(2.0*a);
        printf("x1=%.2f x2=%.2f\n",x1,x2);
    }
    else if(d==0){
        x1=-b/(2.0*a);
        printf("x=%.2f\n",x1);
    }
    else printf("brak pierwiastkow\n");
    return 0;
}