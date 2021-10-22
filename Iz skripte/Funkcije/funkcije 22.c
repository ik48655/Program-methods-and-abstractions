#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int brkoraka(int n,int *umnozak)
{
    int i=1;
    while(n)
    {
        *umnozak *= n%10;
        n/=10;
        if(!n && (*umnozak>9))
        {
            n= *umnozak;
            *umnozak=1;
            i++;
        }
    }
    return i;
}
int main(void)
{
    int broj;
    int umnozak;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    printf("Broj koraka za racunanje umnoska znamenki je %d",brkoraka(broj,&umnozak));
    return 0;
}
