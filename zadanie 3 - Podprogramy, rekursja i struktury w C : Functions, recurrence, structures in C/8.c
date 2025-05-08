//
// Created by Wojciech Durczak on 08/05/2025.
//

#include <stdio.h>
#include <math.h>

int ileCyfr(int n) {
    int ile = 0;
    if (n == 0) return 1;
    while (n > 0) {
        ile++;
        n /=10;
    }
    return ile;
}
int potega10(int k) {
    int wynik = 1;
    for (int i = 0; i <k; i++) wynik *= 10;
    return wynik;
}

int czyAutomorficzna(int n) {
    int kwadrat = n * n;
    int dzielnik = potega10(ileCyfr(n));
    return (kwadrat % dzielnik) == n;
}

int main() {
    int a, b;
    printf("wprowadz przedział <a, b>: ");
    scanf("%d %d", &a, &b);

    printf("liczby automorficzne w przedziale <%d, %d>:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (czyAutomorficzna(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}