#include <stdio.h>
#include <math.h>

int main() {
    int angles[] = {0, 30, 60, 90, 120};
    int n = sizeof(angles) / sizeof(angles[0]);
    int i;

    printf("Kat [°] | sin(kat)\n");
    printf("------------------\n");
    for (i = 0; i < n; i++) {
        double rad = angles[i] * M_PI / 180.0;
        printf("%5d  | %8.4f\n", angles[i], sin(rad));
    }
    return 0;
}