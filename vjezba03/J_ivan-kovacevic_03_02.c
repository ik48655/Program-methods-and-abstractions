#include <stdio.h>
int znamenke(int broj)
{
    int suma=0;
    int mod;
    while(broj>0)
    {
        mod=broj%10;
        suma=suma+mod;
        broj=broj/10;
    }
    return suma;
}
int main(void)
{
    int broj,ret1,ret2;
    printf("Unesite neki broj: \n");
    scanf("%d",&broj);
    ret1=znamenke(broj);
    printf("%d \n",ret1); /* Ovo je samo provjera da li je prva suma dobra */
    if(ret1>=10);
    ret2=znamenke(ret1);
    printf("Suma unesenog broja je: %d, suma nastalog broja je: %d\n",ret1,ret2);
    return 0;
}
