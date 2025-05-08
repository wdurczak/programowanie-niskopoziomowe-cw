//
// Created by Wojciech Durczak on 23/03/2025.
//
#include<stdio.h>
#include<math.h>

typedef struct{double x,y;}p;

double d(p a,p b){return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));}

int main(){
    p p1,p2,p3,p4;
    printf("x y 1: ");
    scanf("%lf%lf",&p1.x,&p1.y);
    printf("x y 2: ");
    scanf("%lf%lf",&p2.x,&p2.y);
    printf("x y 3: ");
    scanf("%lf%lf",&p3.x,&p3.y);
    printf("x y 4: ");
    scanf("%lf%lf",&p4.x,&p4.y);

    double a=d(p1,p2),b=d(p2,p3),c=d(p3,p4),d1=d(p4,p1);
    double pr1=d(p1,p3),pr2=d(p2,p4);
    int prost=fabs(a-c)<0.001 && fabs(b-d1)<0.001 && fabs(pr1-pr2)<0.001;
    int kwad=prost && fabs(a-b)<0.001;
    if(kwad) {
        printf("kwadrat\n");
    } else if
        (prost)printf("prostokat\n");
    else
        printf("cos innego\n");
    return 0;
}