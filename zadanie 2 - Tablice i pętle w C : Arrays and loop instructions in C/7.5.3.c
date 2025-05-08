#include <stdio.h>

int main() {
    int a, b, r;

    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("NWD = %d\n", a);
    return 0;
}