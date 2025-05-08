#include <stdio.h>

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int count = 0, sum = 0;
    for (int i = 1; count < n; i++) {
        int d = i % 10;
        if (d == 1 || d == 2 || d == 7) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}