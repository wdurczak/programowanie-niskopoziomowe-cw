#include <stdio.h>
#include <math.h>

double f_b(double x){
    return pow(sin(x),5) + pow(cos(x),3) + 1;
}

double f_c(double x){
    return log(x + 2.35) - 4.22;
}

int main(){
    char inname[100], outname[100];
    printf("Plik wejsciowy: ");
    scanf("%s", inname);
    printf("Plik wyjsciowy: ");
    scanf("%s", outname);

    FILE *fin = fopen(inname, "r");
    FILE *fout = fopen(outname, "w");
    if (!fin || !fout) return 1;

    double x, y;
    while (fscanf(fin, "%lf", &x) == 1) {
        if (x < 0)
            y = -1.07;
        else if (x <= 103.34)
            y = f_b(x);
        else
            y = f_c(x);
        fprintf(fout, "%f\n", y);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}