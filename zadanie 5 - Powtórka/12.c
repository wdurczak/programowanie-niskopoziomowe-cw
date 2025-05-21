#include <stdio.h>
#include <ctype.h>

int main(){
    int key[27][4];
    FILE *kb = fopen("S.bin","rb");
    if(!kb) return 1;
    fread(key, sizeof(key), 1, kb);
    fclose(kb);

    char mode;
    char inname[128], outname[128];
    printf("Tryb (K-kodowanie/D-dekodowanie): ");
    scanf(" %c", &mode);
    printf("Plik wejsciowy: ");
    scanf("%s", inname);
    printf("Plik wyjsciowy: ");
    scanf("%s", outname);

    FILE *fin, *fout;
    if(mode=='K'||mode=='k'){
        fin = fopen(inname,"r");
        fout = fopen(outname,"w");
        if(!fin || !fout) return 1;
        int c, i;
        while((c = fgetc(fin)) != EOF){
            char ch = tolower(c);
            int idx;
            if(ch>='a' && ch<='z') idx = ch - 'a';
            else if(ch==' ') idx = 26;
            else continue;
            for(i=0;i<4;i++) fprintf(fout, "%d ", key[idx][i]);
            fprintf(fout, "\n");
        }
        fclose(fin);
        fclose(fout);
    }
    else if(mode=='D'||mode=='d'){
        fin = fopen(inname,"r");
        fout = fopen(outname,"w");
        if(!fin || !fout) return 1;
        int w[4], i, j;
        while(fscanf(fin, "%d %d %d %d", &w[0], &w[1], &w[2], &w[3])==4){
            int found=-1;
            for(i=0;i<27;i++){
                int ok=1;
                for(j=0;j<4;j++) if(key[i][j]!=w[j]) ok=0;
                if(ok){ found=i; break; }
            }
            if(found>=0){
                if(found<26) fputc('a'+found, fout);
                else fputc(' ', fout);
            }
        }
        fclose(fin);
        fclose(fout);
    }
    return 0;
}