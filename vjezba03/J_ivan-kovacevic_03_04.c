#include <stdio.h>
int lastdigit(int broj)
{
    int lastdig;
    int kubbroja; kubbroja=broj*broj*broj;
    if (broj>10)
    {
        lastdig=(kubbroja%100);
    }
    else if(broj<10)
    {
        lastdig=(kubbroja%10);
    }
    if(broj>100)
    {
        lastdig=(kubbroja%1000);
    }
    if(broj>1000)
    {
        lastdig=(kubbroja%10000);
    }
    if(broj==lastdig)
    {
        printf("Brojevi zavrsavaju na iste znamenke");
    }
    else
    {
        printf("Brojevi ne zavrsavaju na iste znamenke!");
    }
}
int main(void)
{
    int broj,kubbroja,lastdig;
    char ret1;
    printf("Unesite neki broj: \n");
    scanf("%d",&broj);
    ret1=lastdigit(broj);
    printf("%c",ret1);


    return 0;
}
