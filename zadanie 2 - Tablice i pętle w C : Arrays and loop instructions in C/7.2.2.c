#include <stdio.h>

int main() {
    int i;
    int val = 1;
    for (i = 0; i <= 8; i++) {
        printf("2^%d = %d\n", i, val);
        val *= 2;
    }
    return 0;
}