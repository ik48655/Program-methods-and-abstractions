#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int bitovnibr(int broj)
{
    int broj0=0,broj1=0;
    while(broj>0)
    {
        if(broj&1)
        {
            broj1++;
        }
        else
        {
            broj0++;
        }
        broj=broj>>1;
    }
    if(broj0==broj1)
        return 1;
    else
        return 0;
}
int main(void)
{
    int broj;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    if(bitovnibr(broj)==1)
        printf("Broj %d je izbalansiran.\n",broj);
    else
        printf("Broj %d nije izbalansiran.\n",broj);
    return 0;
}
