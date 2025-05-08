//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>

int main(){
    double a,b,c;
    printf("a b c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<=0||b<=0||c<=0) {
        printf("zle dane\n");
        return 1;
    }
    if(a+b> c&&a+c > b&&b+c > a)
        printf("ok trojkat\n");
    else
        printf("nie da sie\n");
    return 0;
}