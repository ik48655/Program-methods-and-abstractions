#include <stdio.h>
int main()
{
    int brojzn=0;
    unsigned broj;
    printf("Unesite neki broj ");
    scanf("%u",&broj);
    while(broj!=0)
    {
        broj=broj/10;
        brojzn=brojzn+1;
    }
    printf("Broj znamenki je %d",brojzn);
    return 0;
}
