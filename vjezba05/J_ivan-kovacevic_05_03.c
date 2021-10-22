#include <stdio.h>

unsigned int binarni(unsigned int a)
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
    unsigned int privremeni,a;
    printf("Unesite neki broj: ");
    scanf("%d",&a);
    unsigned int brojilo=binarni(a);
    int i;i=brojilo-1;
    while(i>=0)
    {
        privremeni=a>>i;
        printf((privremeni&1)? "1":"0");
        i--;
    }
    return 0;
}
