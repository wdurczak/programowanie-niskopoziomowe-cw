//
// Created by Wojciech Durczak on 07/05/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    int dane[MAX];
    int top;
} Stos;

void init(Stos* s) {
    s->top = -1;
}

int empty(Stos* s) {
    return s->top == -1;
}

void push(Stos* s, int x) {
    if (s->top < MAX - 1) {
        s->dane[++s->top] = x;
    }
}

int pop(Stos* s) {
    if (!empty(s)) {
        return s->dane[s->top--];
    }
    return 0;
}

int main() {
    char expr[256];
    printf("podaj wyrazenie w ONP:\n");
    fgets(expr, sizeof(expr), stdin);

    Stos s;
    init(&s);

    char* tok = strtok(expr, " \n");
    while (tok) {
        if (isdigit(tok[0]) || (tok[0] == '-' && isdigit(tok[1]))) {
            push(&s, atoi(tok));
        } else if (strlen(tok) == 1) {
            int b = pop(&s);
            int a = pop(&s);
            switch(tok[0]) {
                case '+': push(&s, a + b); break;
                case '-': push(&s, a - b); break;
                case '*': push(&s, a * b); break;
                case '/': push(&s, a / b); break;
                default:
                    printf("nieznany operator: %s\n", tok);
                return 1;
            }
        } else {
            printf("nieznany token: %s\n", tok);
            return 1;
        }
        tok = strtok(NULL, " \n");
    }

    if (s.top == 0) {
        printf("wynik: %d\n", pop(&s));
    } else {
        printf("niepoprawne wyrazenie\n");
    }

    return 0;
}