#include <stdio.h>
#include <string.h>

#define MAX_EMP 10
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    double salary;
    double bonus;
} Employee;

void cmdN(Employee tab[], int *pcnt) {
    if (*pcnt >= MAX_EMP) {
        printf("Osiagnieto limit pracownikow!\n");
        return;
    }
    printf("Dodawanie pracownika #%d\n", *pcnt+1);
    printf("Nazwisko: ");
    scanf("%s", tab[*pcnt].name);
    printf("Pensja: ");
    scanf("%lf", &tab[*pcnt].salary);
    printf("Procent premii: ");
    scanf("%lf", &tab[*pcnt].bonus);
    (*pcnt)++;
}

void cmdP(Employee tab[], int cnt) {
    char szuk[MAX_NAME];
    int i, found=0;
    double ns;
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", szuk);
    for(i=0;i<cnt;i++){
        if(strcmp(tab[i].name, szuk)==0){
            found=1;
            printf("Nowa pensja dla %s: ", szuk);
            scanf("%lf", &ns);
            tab[i].salary = ns;
            printf("Pensja zmieniona.\n");
        }
    }
    if(!found) printf("Nie znaleziono %s\n", szuk);
}

void cmdR(Employee tab[], int cnt) {
    char szuk[MAX_NAME];
    int i, found=0;
    double nb;
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", szuk);
    for(i=0;i<cnt;i++){
        if(strcmp(tab[i].name, szuk)==0){
            found=1;
            printf("Nowy procent premii dla %s: ", szuk);
            scanf("%lf", &nb);
            tab[i].bonus = nb;
            printf("Procent premii zmieniony.\n");
        }
    }
    if(!found) printf("Nie znaleziono %s\n", szuk);
}

void cmdW(Employee tab[], int cnt) {
    int i;
    double total=0;
    for(i=0;i<cnt;i++){
        total += tab[i].salary + tab[i].salary * tab[i].bonus/100.0;
    }
    printf("Potrzebna kwota na pensje i premie: %.2f\n", total);
}

int main(){
    Employee emp[MAX_EMP];
    int count=0;
    char opc;
    do {
        printf("\nWybierz opcje (N,P,R,W,K): ");
        scanf(" %c", &opc);
        switch(opc){
            case 'N': case 'n':
                cmdN(emp, &count);
                break;
            case 'P': case 'p':
                if(count>0) cmdP(emp, count);
                else printf("Brak danych. Najpierw N.\n");
                break;
            case 'R': case 'r':
                if(count>0) cmdR(emp, count);
                else printf("Brak danych. Najpierw N.\n");
                break;
            case 'W': case 'w':
                if(count>0) cmdW(emp, count);
                else printf("Brak danych. Najpierw N.\n");
                break;
            case 'K': case 'k':
                printf("Koniec.\n");
                break;
            default:
                printf("Niepoprawna opcja!\n");
        }
    } while(opc!='K' && opc!='k');

    return 0;
}