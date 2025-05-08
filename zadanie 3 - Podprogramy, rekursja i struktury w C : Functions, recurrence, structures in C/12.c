//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>

void scal(int A[], int n, int B[], int m, int wynik[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] < B[j]) wynik[k++] = A[i++];
        else wynik[k++] = B[j++];
    }
    while (i < n) wynik[k++] = A[i++];
    while (j < m) wynik[k++] = B[j++];
}

int main() {
    int A[100], B[100], wynik[200];
    int n, m;

    printf("ile elementow w pierwszym ciagu? ");
    scanf("%d", &n);
    printf("podaj %d posortowanych liczb:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("ile elementow w 2 ciagu? ");
    scanf("%d", &m);
    printf("podaj %d posortowanych liczb:\n", m);
    for (int i = 0; i < m; i++) scanf("%d", &B[i]);

    scal(A, n, B, m, wynik);

    printf("scalony ciag:\n");
    for (int i = 0; i < n + m; i++) printf("%d ", wynik[i]);
    printf("\n");

    return 0;
}