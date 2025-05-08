#include <stdio.h>

int main() {
    int n;
    printf("podaj n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += 2 * i + 1;
    printf("suma: %d\n", sum);
    return 0;
}