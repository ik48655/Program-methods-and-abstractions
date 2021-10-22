#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void repunit(int broj)
{
    int brzn=0;
    int sumazn=0;
    int znam;
    while(broj>0)
    {
        znam=broj%10;
        sumazn=sumazn+znam;
        broj/=10;
        brzn++;
    }
    if(brzn==sumazn)
    {
        printf("Broj je repunit.\n");
    }
    else
        printf("Broj nije repunit.\n");
}
int main(void)
{
    int broj;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    repunit(broj);
    return 0;
}
