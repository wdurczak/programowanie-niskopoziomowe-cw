#include <stdio.h>

int main() {
    int a, b, aa, bb, r, gcd, lcm;

    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);

    aa = a; bb = b;
    \
    while (bb != 0) {
        r = aa % bb;
        aa = bb;
        bb = r;
    }
    gcd = aa;
 \
    lcm = (a / gcd) * b;
    if (lcm < 0) lcm = -lcm;

    printf("NWW = %d\n", lcm);
    return 0;
}