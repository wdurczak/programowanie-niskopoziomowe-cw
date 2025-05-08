//
// Created by Wojciech Durczak on 22/03/2025.
//

#include <stdio.h>

int main() {
    int m, n;
    double T;
    printf("wprowadz m: ");
    scanf("%d", &m);
    printf("wproadz n: ");
    scanf("%d", &n);
    int g = 5 + (4 + (3 + 2* (m - n - 1)));
    int d = 2*(m+n+1) -3 -4 - 5;

    if (d== 0) {
        printf("mianownik = 0 błąd!\n");
    } else {
        T = (double)g / d;
        printf("wartość wyrażenia T = %.2f\n",T);
    }
    return 0;
}