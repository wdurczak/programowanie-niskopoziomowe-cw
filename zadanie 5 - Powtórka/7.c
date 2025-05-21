#include <stdio.h>

double f1(double a, double b) {
    if(a > b)
        return 3*a;
    return 5 - b;
}

double f2(double a, double b) {
    return a*a + b*b - 1;
}

int main() {
    double x,y;
    double licz, mian, F;
    
    printf("Podaj x i y: ");
    if(scanf("%lf %lf",&x,&y) != 2) {
        printf("Blad wczytywania!\n");
        return 1;
    }

    licz = f1(x+5, y) + f2(x, y);
    mian = f1(x, y) * f2(x, y+1);
    
    if(mian == 0) {
        printf("Nie da sie policzyc: dzielenie przez zero\n");
        return 1;
    }
    
    F = licz / mian;
    printf("F(%f,%f) = %f\n", x, y, F);
    return 0;
}