#include <stdio.h>
#include <limits.h>

int isPal(long x) {
    long t = x, rev = 0;
    while (t) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }
    return rev == x;
}

int main() {
    int i;
    for (i = INT_MAX; i > 0; i--) {
        if (isPal(i)) {
            printf("Najwiekszy palindrom w int: %d\n", i);
            break;
        }
    }
    return 0;
}