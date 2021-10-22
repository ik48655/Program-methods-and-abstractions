#include <stdio.h>

unsigned int decimalno_mj(unsigned int a)
{
    unsigned int brojilo=0;
    while(a)
    {
        brojilo++;
        a>>=1;
    }
    return brojilo;
}
int main()
{
    unsigned int privremeni,broj,k;
    printf("Unesite neki broj: ");
    scanf("%d",&broj);
    printf("Unesite broj k: ");
    scanf("%d",&k);
    unsigned int brojilo=decimalno_mj(broj);
    int i;i=brojilo-1;
    while(i>=0)
    {
        privremeni=broj>>i;
        i==k? printf("%d",1):printf((privremeni&1)?"1":"0");
        i--;
    }
    return 0;
}
