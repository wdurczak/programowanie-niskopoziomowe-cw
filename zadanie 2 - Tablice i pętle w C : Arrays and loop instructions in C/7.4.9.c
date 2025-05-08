#include <stdio.h>

int digit_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

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
    for (int i = 1; count < n; i++) {
        int ds = digit_sum(i);
        if (is_prime(ds)) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}