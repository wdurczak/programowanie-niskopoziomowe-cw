#include <stdio.h>

typedef struct {
    char name[20];
    int start_day;
} Zodiac;

char *getZodiac(int d, int m) {
    static Zodiac Z[12] = {
        {"Wodnik",    20},
        {"Ryby",      19},
        {"Baran",     21},
        {"Byk",       20},
        {"Bliznieta", 21},
        {"Rak",       21},
        {"Lew",       23},
        {"Panna",     23},
        {"Waga",      23},
        {"Skorpion",  23},
        {"Strzelec",  22},
        {"Koziorozec",22}
    };
    int idx = m - 1;
    if (d < Z[idx].start_day) {
        idx--;
        if (idx < 0) idx = 11;
    }
    return Z[idx].name;
}

int main() {
    int day, month;
    char *znak;
    printf("Podaj dzien i miesiac urodzenia: ");
    if (scanf("%d %d", &day, &month) != 2) return 1;
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Nieprawidlowe dane\n");
        return 1;
    }
    znak = getZodiac(day, month);
    printf("Znak zodiaku: %s\n", znak);
    return 0;
}