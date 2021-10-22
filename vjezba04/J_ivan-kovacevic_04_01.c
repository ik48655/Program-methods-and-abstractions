
#include <stdio.h>
int potencije(int broj, int potencija)
{
    int privr, potencirani;
    int privr2 = potencija;
    int i;
    int privr3;
    for(i=1;privr2<broj/potencija;i=i+1)
    {
        privr2=privr2*potencija;
    }
    printf("%d = ", broj);
    while(i>=0)
    {
        privr=0;
        potencirani=potencija;
        if(i!=0)
        {
            for(privr3=i;privr3>1;privr3=privr3-1)
            {
                potencirani=potencirani*potencija;
            }
        }
        else
            {
                potencirani=1;
            }
        if(broj>=potencirani)
        {
            privr=broj/potencirani; //Koliko brojeva s kojim prikazujemo moze stati u nas broj
            broj=broj%potencirani;  //Ostatak broja nakon prve operacije
        }
        if(privr&&i!=0)
        {
            printf("%d*%d^%d + ",privr,potencija,i);
        }
        else if(privr&&i==0)
        {
            printf("%d*%d^%d",privr,potencija,i);
        }
        i=i-1;
    }
}

int main()
{
    int broj,potencija;
    printf("Unesite broj : ");
    scanf("%d", &broj);
    printf("Unesite broj pomocu kojeg zelite prikazati vec uneseni broj: ");
    scanf("%d", &potencija);
    potencije(broj,potencija);
}
