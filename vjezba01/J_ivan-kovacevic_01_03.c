#include <stdio.h>
int main(void)
{
    int broj;
    int dig1,dig2,dig3;
    int kub1,kub2,kub3;
    printf("Unesite neki broj:");
    scanf("%d",&broj);
    dig1=broj/100;
    dig2=(broj/10)%10;
    dig3=broj%10;
    printf("Znamenke su: %d %d %d\n",dig1,dig2,dig3);
    kub1=dig1*dig1*dig1;
    kub2=dig2*dig2*dig2;
    kub3=dig3*dig3*dig3;
    if(broj==(kub1+kub2+kub3))
        printf("Broj %d je Armstrongov broj!",broj);
    else
        printf("Broj %d nije Armstrongov broj!",broj);
    return 0;
}
