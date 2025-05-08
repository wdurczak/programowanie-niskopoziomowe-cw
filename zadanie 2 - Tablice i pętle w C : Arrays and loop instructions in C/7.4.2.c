#include <stdio.h>

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 2 * i + 1;
    }
    printf("Suma: %d\n", sum);
    return 0;
}