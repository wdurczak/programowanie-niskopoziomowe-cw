//
// Created by Wojciech Durczak on 06/04/2025.
//

#include<stdio.h>

int main() {
    int a, b;
    printf("podaj a i b ");
    scanf("%d %d", &a, &b);
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    if (b != 0)
        printf("a/b = %d\n", a / b);
    else
        printf("nie możesz dzielić przez zero\n");
    return 0;
}