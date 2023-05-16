#include <stdlib.h>
#include <stdio.h>

typedef struct 
{
    int num,den;

}frazione;

frazione readFrazione();
frazione riduzione(frazione f);
void stampaFrazione(frazione f);
frazione prodotto(frazione f1, frazione f2);
frazione divisione(frazione f1, frazione f2);
frazione somma(frazione f1, frazione f2);
frazione differenza(frazione f1, frazione f2);
int main()
{
    frazione f1,f2;
    frazione fRis;

   f1 =  readFrazione();
   /*f2 = readFrazione();*/

   f1 = riduzione(f1);
   stampaFrazione(f1);
   fRis =  prodotto(f1, f2);
   stampaFrazione(fRis);

   stampaFrazione(prodotto(f1, f2));


    differenza(f1, f2);


  
}
frazione readFrazione()
{
    frazione f;

    printf("\n inserisci numeratore: ");
    scanf("%d", &f.num);
    printf("\n inserire denominatore: ");
    scanf("%d", &f.den);

        return f;
}
void stampaFrazione(frazione f)
{
    printf("\n %d", f.num);
    printf("\n -");
    printf("\n %d", f.den);

    
}
frazione riduzione(frazione f)
{
    
    int i;

    for(i = 2; i <= f.den;i++)
    {
        if(f.num % i == 0 && f.den % i == 0)
        {
           f.num =  f.num / i;
           f.den =   f.den / i;

           i--;
        }
    }
    

    return f;
}
frazione prodotto(frazione f1, frazione f2)
{
    
    f1.num = f1.num * f2.num;
    f1.den = f1.den * f2.den;

    return  riduzione(f1);    
}
frazione divisione(frazione f1, frazione f2)
{
    int tmp;

    tmp = f2.num;
    f2.num = f1.den;
    f2.den = tmp;

    return  prodotto(f1,f2);
}
frazione somma(frazione f1, frazione f2)
{
   

    frazione ris;

        ris.den = f1.den * f2.den;
        ris.num = ris.den / f1.den * f1.num + ris.den / f2.den * f2.num;


        return riduzione(ris);

}
frazione differenza(frazione f1, frazione f2){

    f2.num = -f2.num;

    return somma(f1, f2);
}

