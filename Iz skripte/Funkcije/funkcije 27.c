#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int unazad(int broj)
{
    int rev=0;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    while(broj!=0)
    {
        if(broj==1000)
            return -1;
        else
            rev=rev*10;
            rev=rev+broj%10;
            broj=broj/10;

    }
    printf("Broj ispisan unazad je: %d.\n",rev);

}
int main(void)
{
    int broj;
    while(unazad(broj)!=-1)
        unazad(broj);
    return 0;
}
