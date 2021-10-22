#include<stdio.h>
int trazeni_clan(int pocetni,int udaljenost, int clan)
{
    for(pocetni=pocetni;clan>0;clan=clan)
    {
        pocetni=pocetni+udaljenost;
        clan=clan-1;
    }
    return pocetni-udaljenost;

}
int main(void)
{
    int pocetni,udaljenost,clan,funkcija;
    printf("Unesite prvi clan niza: ");
    scanf("%d",&pocetni);
    printf("Unesite udaljenost izmedju clanova: ");
    scanf("%d",&udaljenost);
    printf("Unesite trazeni clan: ");
    scanf("%d",&clan);
    funkcija=trazeni_clan(pocetni,udaljenost,clan);
    printf("%d",funkcija);
    return 0;
}
