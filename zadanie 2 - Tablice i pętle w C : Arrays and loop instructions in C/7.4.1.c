#include <stdio.h>

int main() {
    int n;
    printf("podaj n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    printf("Suma: %d\n", sum);
    return 0;
}