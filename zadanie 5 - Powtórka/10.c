#include <stdio.h>

#define MAX 1000
#define NAMELEN 100

typedef struct {
    double lat;
    double lon;
    char name[NAMELEN];
} Loc;

int main(){
    Loc tab[MAX];
    int n, i;
    double xlat=0, xlon=0;
    char opc;

    FILE *f = fopen("Polska.txt","r");
    if(!f) return 1;
    if(fscanf(f,"%d",&n)!=1 || n<1 || n>MAX){ fclose(f); return 1; }
    for(i=0;i<n;i++){
        fscanf(f,"%lf %lf %s",&tab[i].lat,&tab[i].lon,tab[i].name);
    }
    fclose(f);

    while(1){
        scanf(" %c",&opc);
        if(opc=='Q' || opc=='q') break;
        if(opc=='L' || opc=='l'){
            scanf("%lf %lf",&xlat,&xlon);
        }
        else if(opc=='N' || opc=='n'){
            FILE *g = fopen("Polnoc.txt","w");
            for(i=0;i<n;i++) if(tab[i].lat > xlat) fprintf(g,"%s\n",tab[i].name);
            fclose(g);
        }
        else if(opc=='S' || opc=='s'){
            FILE *g = fopen("Poludnie.txt","w");
            for(i=0;i<n;i++) if(tab[i].lat < xlat) fprintf(g,"%s\n",tab[i].name);
            fclose(g);
        }
        else if(opc=='W' || opc=='w'){
            FILE *g = fopen("Zachod.txt","w");
            for(i=0;i<n;i++) if(tab[i].lon < xlon) fprintf(g,"%s\n",tab[i].name);
            fclose(g);
        }
        else if(opc=='E' || opc=='e'){
            FILE *g = fopen("Wschod.txt","w");
            for(i=0;i<n;i++) if(tab[i].lon > xlon) fprintf(g,"%s\n",tab[i].name);
            fclose(g);
        }
    }

    return 0;
}