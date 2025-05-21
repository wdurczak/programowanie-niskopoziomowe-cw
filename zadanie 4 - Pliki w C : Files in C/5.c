//
// Created by Wojciech Durczak on 21/05/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void gsub(char *str, const char *what, const char *repl) {
    char buf[1024], *p;
    buf[0] = 0;
    while ((p = strstr(str, what))) {
        strncat(buf, str, p - str);
        strcat(buf, repl);
        str = p + strlen(what);
    }
    strcat(buf, str);
    strcpy(str, buf);
}

void gensub(char *str, const char *what, const char *repl) {
    gsub(str, what, repl);
}

int indexOf(const char *str, const char *substr) {
    char *p = strstr(str, substr);
    return p ? (p - str) + 1 : 0;
}

int split(char *str, char *arr[], const char *sep) {
    int count = 0;
    char *token = strtok(str, sep);
    while (token) {
        arr[count++] = token;
        token = strtok(NULL, sep);
    }
    return count;
}

void sub(char *str, const char *what, const char *repl) {
    char *p = strstr(str, what);
    if (p) {
        char buf[1024];
        int idx = p - str;
        strncpy(buf, str, idx);
        buf[idx] = 0;
        strcat(buf, repl);
        strcat(buf, p + strlen(what));
        strcpy(str, buf);
    }
}

int main() {
    char text[256] = "ala ma kota i kot lubi mleko";
    printf("oryg: %s\n", text);

    gsub(text, "kot", "pies");
    printf("po gsub: %s\n", text);

    strcpy(text, "ala ma kota");
    printf("index kot: %d\n", indexOf(text, "kot"));

    char *parts[10];
    strcpy(text, "a,b,c");
    int n = split(text, parts, ",");
    for (int i = 0; i < n; i++)
        printf("part[%d]: %s\n", i, parts[i]);

    return 0;
}