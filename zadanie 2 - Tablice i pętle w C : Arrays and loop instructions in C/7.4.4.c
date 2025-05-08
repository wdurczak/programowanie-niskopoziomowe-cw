#include <stdio.h>

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int count = 0, sum = 0;
    for (int i = 1; count < n; i++) {
        if (i % 7 == 0) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}