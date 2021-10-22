#include <stdio.h>
#include <math.h>

int bite(int broj, int k)
{
    int privr=0;
    int i;i=0;
    while(i<=6)
    {
        privr+=1;
        privr<<=1;
        i++;
    }
    privr+=1;
    privr<<=8*(k-1);
    privr=privr|broj;
    return privr;
}
int main()
{
    int broj,k;
    printf("Unesite neki broj: ");
    scanf("%d",&broj);
    printf("Unesite redni broj bajta: ");
    scanf("%d",&k);
    printf("%d",bite(broj,k));
    return 0;
}
