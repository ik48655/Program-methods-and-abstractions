#include<stdio.h>
int trecizad(int broj)
{
    if(broj%2==0)
        return broj/2;
    else
        return 3*broj+1;
}
int main(void)
{
    int broj;
    printf("Unesite neki broj: \n");
    scanf("%d",&broj);
    while(broj!=1)
    {
        broj=trecizad(broj);
        printf(",%d",broj);
    }
    return 0;
}
