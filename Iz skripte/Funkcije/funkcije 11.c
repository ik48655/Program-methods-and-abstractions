#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int potencija(int n, int k)
{
    if(k!=0)
        return n*potencija(n,k-1);
    else
        return 1;
}
int main(void)
{
    int broj,potenc;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    printf("Unesite na koji broj potenciramo taj broj.\n");
    scanf("%d",&potenc);
    int rez=potencija(broj,potenc);
    printf("%d^%d = %d",broj,potenc,rez);
    return 0;
}
