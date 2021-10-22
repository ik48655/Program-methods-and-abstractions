#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sumadonparni(int n)
{
    int rez=0;
    if(n<2)
        return 0;
    if(n%2==0)
        rez=1;
    return rez*n*sumadonparni(n-1);
}
int main(void)
{
    int broj;
    printf("Unesite broj do kojeg racunamo sumu.\n");
    scanf("%d",&broj);
    printf("Produkt parnih brojeva do broja %d je %d.\n",broj,sumadonparni(broj));
    return 0;
}
