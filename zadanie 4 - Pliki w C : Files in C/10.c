#include <stdio.h>


int main() {
    FILE *f = fopen("input.txt", "r");
    char buf[256];
    int x, y, z;

    if (!f) {
        printf("blad otwarcia pliku\n");
        return 1;
    }
    printf("SUMA\n");
    while (fgets(buf, sizeof(buf), f)) {
        if (sscanf(buf, "%d %d %d", &x, &y, &z) == 3) {
            int s = x + y + z;
            printf("| %d | %d | %d | %d\n", x, y, z, s);
        }
    }

    fclose(f);
    return 0;
}