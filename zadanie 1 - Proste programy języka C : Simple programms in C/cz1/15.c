//
// Created by Wojciech Durczak on 25/03/2025.
//
#include<stdio.h>
#include<math.h>

int main(){
    double x1,y1,x2,y2,x3,y3,p;
    printf("A: ");
    scanf("%lf%lf",&x1,&y1);
    printf("B: ");
    scanf("%lf%lf",&x2,&y2);
    printf("C: ");
    scanf("%lf%lf",&x3,&y3);
    p=0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(p==0) {
        printf("wspolliniowe\n");
    } else {
        printf("nie\n");
    }
    return 0;
}