#include<stdlib.h>
#include<string.h>
#include<stdio.h>
unsigned int simetrican(unsigned int num)
{
    unsigned int rev=0;
    while(num>0)
    {
        rev<<=1;
        if(num&1==1)
        {
            rev^=1;
        }
        num>>=1;
    }
    return rev;
}
int main(void)
{
    unsigned int broj;
    printf("Unesite neki broj.\n");
    scanf("%u",&broj);
    if(simetrican(broj)==broj)
        printf("Binarni zapis broja %u je simetrican.\n",broj);
    else
        printf("Binarni zapis broja %u nije simetrican.\n",broj);
    return 0;
}
