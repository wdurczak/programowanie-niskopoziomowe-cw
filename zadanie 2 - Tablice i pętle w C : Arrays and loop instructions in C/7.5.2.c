#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Podaj n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("%d! = %lld\n", n, fact);
    return 0;
}