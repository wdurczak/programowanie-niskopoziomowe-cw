#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("podaj liczbe calkowita dodatnia: ");
        if (scanf("%d", &n) != 1) {

            printf("to nie jest liczba calkowita.\n");

            while (getchar() != '\n');
            continue;
        }
        if (n <= 0) {
            printf("liczba musi byc dodatnia.\n");
            continue;
        }
        break;
    }
    printf("wpisałeś %d\n", n);
    return 0;
}