//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    int w;double x,y,z;
    printf("1-^ 2-1/x 3-ln 4-sin 5-tan\nwyb:");
    scanf("%d",&w);
    switch(w){
        case 1:printf("x y:");
            scanf("%lf%lf",&x,&y);z=pow(x,y);break;
        case 2:printf("x:");
            scanf("%lf",&x);
        if(x==0) {
            printf("err dzielenie\n");
            return 1;
        }
        z=1/x;break;
        case 3:
            printf("x:");scanf("%lf",&x);
        if(x<=0) {
            printf("err ln\n");
            return 1;
        }
        z=log(x);
        break;
        case 4:
            printf("x:");
        scanf("%lf",&x);
        z=sin(x);
        break;
        case 5:printf("x:");
        scanf("%lf",&x);
        z=tan(x);break;
        default:
            printf("zly\n");
        return 1;
    }
    printf("wynik=%.4f\n",z);
    return 0;
}