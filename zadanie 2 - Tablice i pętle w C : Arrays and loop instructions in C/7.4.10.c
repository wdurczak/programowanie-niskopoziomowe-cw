#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int count = 0, sum = 0;
    for (int i = 2; count < n; i++) {
        if (is_prime(i)) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}