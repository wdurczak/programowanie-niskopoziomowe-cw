//
// Created by Wojciech Durczak on 03/05/2025.
//
#include <stdio.h>


#define MAX 100

typedef struct {
    char imie[30], nazw[30];
    int album;
    float ocena;
} Student;

Student st[MAX];
int n = 0;

void dodaj() {
    printf("Ilu studentów? ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("\nStudent %d\n",i+1);
        printf("Imie: "); scanf("%s", st[i].imie);
        printf("Nazwisko: "); scanf("%s", st[i].nazw);
        printf("Nr albumu: "); scanf("%d", &st[i].album);
        printf("Ocena: "); scanf("%f", &st[i].ocena);
    }
}

void pokaz() {
    if(n==0){printf("Brak danych\n");return;}
    for(int i=0;i<n;i++){
        printf("%d. %s %s | %d | %.2f\n",i+1,st[i].imie,st[i].nazw,st[i].album,st[i].ocena);
    }
}

void zmien() {
    int a;
    if(n==0){printf("Brak danych\n");return;}
    printf("Który student (1-%d)? ",n);
    scanf("%d",&a);
    if(a<1||a>n){printf("Zły numer\n");return;}
    a--;
    printf("Nowe imie: "); scanf("%s", st[a].imie);
    printf("Nowe nazwisko: "); scanf("%s", st[a].nazw);
    printf("Nowy nr albumu: "); scanf("%d", &st[a].album);
    printf("Nowa ocena: "); scanf("%f", &st[a].ocena);
}

void statystyki() {
    if(n==0){printf("Brak danych\n");return;}
    float suma=0,max=st[0].ocena,min=st[0].ocena;
    for(int i=0;i<n;i++){
        suma+=st[i].ocena;
        if(st[i].ocena>max) max=st[i].ocena;
        if(st[i].ocena<min) min=st[i].ocena;
    }
    printf("Srednia: %.2f | Min: %.2f | Max: %.2f\n",suma/n,min,max);
}

void usun_grupe() {
    n=0;
    printf("Dane usunięte\n");
}

int main(){
    char opc;
    while(1){
        printf("\nD-dodaj W-wyswietl Z-zmien S-statystyki U-usun K-koooniec: ");
        scanf(" %c",&opc);
        if(opc=='D') dodaj();
        else if(opc=='W') pokaz();
        else if(opc=='Z') zmien();
        else if(opc=='S') statystyki();
        else if(opc=='U') usun_grupe();
        else if(opc=='K') break;
        else printf("Nieznane polecenie\n");
    }
    return 0;
}