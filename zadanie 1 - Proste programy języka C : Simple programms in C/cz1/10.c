//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    int w;double a,b,c,d,h,r,o,p;
    printf("1-kolo 2-kwadrat 3-prostokat 4-trojkat 5-trapez\nwybor:");
    scanf("%d",&w);
    switch(w){
        case 1:
            printf("r:");
            scanf("%lf",&r);
            o=2*M_PI*r;p=M_PI*r*r;
        break;
        case 2:
            printf("a:");
            scanf("%lf",&a);
            o=4*a;p=a*a;
        break;
        case 3:
            printf("a b:");
            scanf("%lf%lf",&a,&b);
            o=2*(a+b);p=a*b;
        break;
        case 4:
            printf("a b c h:");
            scanf("%lf%lf%lf%lf",&a,&b,&c,&h);
            o=a+b+c;p=0.5*b*h;
        break;
        case 5:
            printf("a b c d h:");
            scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&h);
            o=a+b+c+d;p=0.5*(a+b)*h;
        break;
        default:
            printf("blad\n");
        return 0;
    }
    printf("obw=%.2f\n",o);
    printf("pole=%.2f\n",p);
    return 0;
}