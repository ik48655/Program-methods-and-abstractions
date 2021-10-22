#include <stdio.h>
int main(void)
{
    int a,b,c;
    int d,e,f;
    int sat,min,sek;
    printf("Unesite pocetak filma: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Unesite kraj filma: ");
    scanf("%d %d %d",&d,&e,&f);
    sat=d-a;
    min=e-b;
    sek=f-c;
    if (sat<=0)
        sat=sat+24;
    if(min<=0)
        min=min+60;
    if(sek<=0)
        sek=sek+60;
    printf("Trajanje filma je %d %d %d",sat,min,sek);
    return 0;
}
