#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sumprodkv(int broj,int *suma,int *produkt)
{
    int znm;
    *suma=0;
    *produkt=1;
    while(broj>0)
    {
        znm=broj%10;
        *suma=*suma+(znm*znm);
        *produkt=*produkt*(znm*znm);
        broj=broj-1;
    }
}
int main(void)
{
    int broj,suma,produkt;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    sumprodkv(broj,&suma,&produkt);
    printf("Suma kvadrata znamenki broja %d je: %d.\n",broj,suma);
    printf("Produkt kvadrata znamenki broja %d je %d.\n",broj,produkt);
    return 0;
}
