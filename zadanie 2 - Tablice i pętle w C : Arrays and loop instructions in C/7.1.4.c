
#include <stdio.h>

int main() {
    int h;
    printf("podaj wysokosc litery A: ");
    scanf("%d", &h);

    int mid = h/2 + 1;
    int full = h + 1;

    for (int i = 1; i <= h; i++) {
        if (i < mid) {
            int lead = mid - i;
            for (int k = 0; k < lead; k++) putchar(' ');
            if (i == 1) {
                putchar('A');
            } else {
                putchar('A');
                int inner = full - 2*lead - 2;
                for (int k = 0; k < inner; k++) putchar(' ');
                putchar('A');
            }
        }
        else if (i == mid) {
            for (int k = 0; k < full; k++)
                putchar('A');
        }
        else {
            putchar('A');
            for (int k = 0; k < full-2; k++)
                putchar(' ');
            putchar('A');
        }
        putchar('\n');
    }
    return 0;
}