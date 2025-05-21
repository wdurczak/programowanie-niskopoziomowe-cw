#include <stdio.h>
#include <string.h>

#define MAXC 20
#define MAXH 200
#define MAXG 200
#define NAMELEN 50
#define PWLEN 9

int main(){
    FILE *fk = fopen("K.txt","r");
    int N;
    fscanf(fk,"%d",&N);
    struct { int num, votes; char im[NAMELEN], naz[NAMELEN]; } C[MAXC];
    for(int i=0;i<N;i++){
        fscanf(fk,"%d %s %s",&C[i].num,C[i].im,C[i].naz);
        C[i].votes = 0;
    }
    fclose(fk);

    FILE *fh = fopen("H.txt","r");
    int Hn;
    fscanf(fh,"%d",&Hn);
    char pass[MAXH][PWLEN];
    for(int i=0;i<Hn;i++){
        fscanf(fh,"%s",pass[i]);
    }
    fclose(fh);

    FILE *fg = fopen("G.txt","r");
    int Gn;
    fscanf(fg,"%d",&Gn);
    struct { int num; char pw[PWLEN]; } V[MAXG];
    for(int i=0;i<Gn;i++){
        fscanf(fg,"%d %s",&V[i].num,V[i].pw);
    }
    fclose(fg);

    int total = Gn, valid = 0, invalid = 0, multiple = 0;

    for(int i=0;i<Gn;i++){
        int canIdx = -1, passOk = 0, cnt = 0;
        for(int j=0;j<N;j++){
            if(V[i].num == C[j].num) canIdx = j;
        }
        for(int j=0;j<Hn;j++){
            if(strcmp(V[i].pw, pass[j])==0) passOk = 1;
        }
        for(int j=0;j<Gn;j++){
            if(strcmp(V[i].pw, V[j].pw)==0) cnt++;
        }
        if(canIdx<0 || !passOk){
            invalid++;
        } else if(cnt>1){
            multiple++;
        } else {
            C[canIdx].votes++;
            valid++;
        }
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(C[j].votes > C[i].votes){
                auto tmp = C[i];
                C[i] = C[j];
                C[j] = tmp;
            }
        }
    }

    printf("Wyniki glosowania:\n");
    for(int i=0;i<N;i++){
        printf("%d %s %s %d\n", C[i].num, C[i].im, C[i].naz, C[i].votes);
    }
    printf("Liczba glosow oddanych: %d\n", total);
    printf("Liczba glosow waznych: %d\n", valid);
    printf("Liczba glosow niewaznych: %d\n", invalid);
    printf("Liczba glosow wielokrotnych: %d\n", multiple);

    return 0;
}
