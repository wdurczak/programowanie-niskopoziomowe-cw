#include <stdio.h>

int main() {
    int n, x = 0;

    printf("Podaj n: ");
    scanf("%d", &n);

    while ((x+1)*(x+1) <= n)
        x++;

    printf("Pierwiastek calkowity z %d = %d\n", n, x);
    return 0;
}