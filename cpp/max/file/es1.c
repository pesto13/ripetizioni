#include <stdio.h>

int main(){
    char testo[100] = "Galeotto fu 'l libro e chi lo scrisse: quel giorno piu' non vi leggemmo avante";
    char leggifile[100];
    FILE *f;
    f = fopen("poesia.txt", "w");
    fprintf(f, "%s", testo);
    fclose(f);
    f = fopen("poesia.txt", "r");
    fgets(leggifile, 100, f);
    fclose(f);
    printf("%s", leggifile);

    return 0;
}