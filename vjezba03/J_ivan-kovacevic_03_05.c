/* Napisati funkciju koja vraća promijenjen peteroznamenkasti broj na način da svaku
znamenku uveća za 1. Napisati program u kojem korisnik unosi broj sve dok ne unese
peteroznamenkasti broj (koristiti naredbu continue).
Primjer: Za broj 43992 funkcija vraća 54003.
*/
#include<stdio.h>
int inc_dig(int broj)
{
    int uvecani;uvecani = 0;
	int privr;privr = 1;
	do
    {
		if (broj % 10 == 9)
        {
			if (privr == 1)
			{
				broj=broj-9;
			}
			else
			{
				uvecani=uvecani+(privr%10);
			}
		}
		else
        {
			uvecani=uvecani+(((broj + 1) % 10) * privr);
		}
		privr=privr*10;
		broj=broj/10;
	}while (broj > 0);
	return uvecani;
}
int main(void)
{
    int unos,funkcija;
    while((unos<10000)||(unos>99999))
    {
        printf("Unesite neki peteroznamenkasti broj: ");
        scanf("%d",&unos);
        continue;
    }
    funkcija=inc_dig(unos);
    printf("%d",funkcija);
    return 0;
}
