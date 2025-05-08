#include <stdio.h>

int main() {
    int a, b;
    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);
    if (a > b) { int t=a; a=b; b=t; }
    for (int i = a; i <= b; i++) {
        for (int j = i; j <= b; j++) {
            for (int k = j; k <= b; k++) {
                if (i*i + j*j == k*k)
                    printf("(%d,%d,%d)\n", i,j,k);
            }
        }
    }
    return 0;
}