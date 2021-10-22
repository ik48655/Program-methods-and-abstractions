#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int kta_znamenka(int broj,int znamenka)
{
    int brojilo=0;
    int znamenkaubr;
    while(broj>0)
    {
        znamenkaubr=broj%10;
        if(znamenkaubr==znamenka)
        {
            brojilo++;
        }
        broj=broj/10;
    }
    return brojilo;
}
int main(void)
{
    int broj,znam;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    printf("Unesite k-tu znamenku.(0 <= k <= 9)\n");
    scanf("%d",&znam);
    printf("Broj k = %d znamenki u broju %d je : %d.\n",znam,broj,kta_znamenka(broj,znam));
    return 0;
}
