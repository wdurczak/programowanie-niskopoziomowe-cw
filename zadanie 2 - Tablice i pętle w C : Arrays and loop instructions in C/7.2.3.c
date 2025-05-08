#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double x;
    for (i = 1; i <= 9; i++) {
        x = i / 10.0;
        printf("log10(%.1f) = %.6f\n", x, log10(x));
    }
    return 0;
}