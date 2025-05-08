//
// Created by Wojciech Durczak on 06/04/2025.
//


#include<stdio.h>

int main() {
    int x, y, *p1 = &x, *p2 = &y;
    printf("podaj x i y ");
    scanf("%d %d", p1, p2);
    printf("iloczyn x*y = %d\n", (*p1) * (*p2));
    return 0;
}