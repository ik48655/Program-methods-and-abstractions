#include <stdio.h>
void suma_produkt(int broj,int *suma,int *produkt)
{
    int privr = broj;
    *suma=0;
    *produkt=1;
    do
    {
        *suma= *suma + (privr%10);
        *produkt= *produkt * (privr%10);
        privr=privr/10;
    }while(privr>0);

}
int main()
{
    int broj,suma,produkt;
    printf("Unesite neki broj: ");
    scanf("%d",&broj);
    suma_produkt(broj,&suma,&produkt);
    printf("Suma broja %d je: %d,produkt broja je %d",broj,suma,produkt);
    return 0;
}
