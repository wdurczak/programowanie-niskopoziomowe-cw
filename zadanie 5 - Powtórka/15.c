#include <stdio.h>
#include <ctype.h>

int parseIP(const char *s, unsigned int *addr) {
    int state = 0, comp = 0, val = 0;
    *addr = 0;
    char c;
    while ((c = *s++)) {
        if (state == 0) {
            if (isdigit(c)) {
                val = c - '0'; state = 1;
            } else return 0;
        }
        else if (state >= 1 && state <= 2) {
            if (isdigit(c)) {
                val = val * 10 + (c - '0');
                if (val > 255) return 0;
                state++;
            }
            else if (c == '.') {
                *addr = (*addr << 8) | val;
                comp++;
                if (comp > 3) return 0;
                state = 0; val = 0;
            }
            else return 0;
        }
        else if (state == 3) {
            if (isdigit(c)) return 0;
            if (c == '.') {
                *addr = (*addr << 8) | val;
                comp++;
                if (comp > 3) return 0;
                state = 0; val = 0;
            }
            else return 0;
        }
    }
    if ((state >= 1 && state <= 3) && comp == 3) {
        *addr = (*addr << 8) | val;
        return 1;
    }
    return 0;
}

int main() {
    char buf[100];
    unsigned int a;
    if (!fgets(buf, 100, stdin)) return 1;
    char *p = buf;
    while (*p && (*p==' '||*p=='\t'||*p=='\n')) p++;
    char *q = p;
    while (*q && *q!='\n') q++;
    *q = 0;
    if (parseIP(p, &a))
        printf("%08X\n", a);
    else
        printf("Niepoprawny adres\n");
    return 0;
}