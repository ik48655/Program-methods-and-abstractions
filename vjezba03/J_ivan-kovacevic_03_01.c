#include <stdio.h>
#include <math.h>

int brojzn(int broj)
{
    int suma;
    suma=0;
    do{
        broj=broj/10;
        suma=suma+1;
    }while(broj>0);
    return suma;
}
int main(void)
{
    int broj,ret1;
    printf("Unesite neki broj: ");
    scanf("%d",&broj);
    ret1=brojzn(broj);
    printf("Uneseni broj ima %d znamenki!",ret1);
    return 0;
}
