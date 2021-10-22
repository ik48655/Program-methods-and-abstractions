#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int korakznamenke(int broj)
{
    int produkt=1;
    int brojkoraka;
    while(broj!=0)
    {
        produkt*=broj%10;
        broj/=10;
    }
    return produkt;
}
int main(void)
{
    int broj=436;
    printf("%d",korakznamenke(broj));
    return 0;
}
