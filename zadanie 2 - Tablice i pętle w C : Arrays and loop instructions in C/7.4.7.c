#include <stdio.h>

int digit_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int count = 0, sum = 0;
    for (int i = 1; count < n; i++) {
        if (digit_sum(i) == 100) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}