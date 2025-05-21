#include <stdio.h>

int main(){
    FILE *fin=fopen("Lili.txt","r");
    FILE *pe=fopen("Pa.txt","w");
    FILE *po=fopen("NiePa.txt","w");
    if(!fin||!pe||!po) return 1;
    int x;
    while(fscanf(fin,"%d",&x)==1){
        if(x%2==0) fprintf(pe,"%d ",x);
        else        fprintf(po,"%d ",x);
    }
    fclose(fin);
    fclose(pe);
    fclose(po);
    return 0;
}