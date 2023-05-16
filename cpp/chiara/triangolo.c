#include<stdio.h>
#include<math.h>

float calcolaIpotenusa(float, float);
float calcolaPerimetro(float, float, float);
float calcolaArea(float, float);

int main(){

    float c1, c2, ip, perimetro, area;

    printf("Inserisci altezza: ");
    scanf("%f", &c1);

    printf("Inserisci base: ");
    scanf("%f", &c2);

    ip = calcolaIpotenusa(c1, c2);
    perimetro = calcolaPerimetro(c1, c2, ip);
    area = calcolaArea(c1, c2);

    printf("%f %f %f", ip, perimetro, area);

    return 0;
}


float calcolaIpotenusa(float c1, float c2){
    float ip;
    ip = sqrt(c1*c1 + c2*c2);
    return ip;
}

float calcolaPerimetro(float c1, float c2, float ip){
    float perimetro;
    perimetro = c1 + c2 + ip;
    return perimetro;
}

float calcolaArea(float c1, float c2){
    float area;
    area = c1 * c2 / 2;
    return area;
}



