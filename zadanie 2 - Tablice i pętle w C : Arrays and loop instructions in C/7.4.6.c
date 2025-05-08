#include <stdio.h>

int main() {
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);

    int count = 0, sum = 0;
    for (int i = 1; count < n; i++) {
        int last2 = i % 100;
        if (last2 == 31 || last2 == 62 || last2 == 17) {
            sum += i;
            count++;
        }
    }
    printf("Suma: %d\n", sum);
    return 0;
}