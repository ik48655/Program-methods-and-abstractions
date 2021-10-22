#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int djeljitelji(int broj)
{
    int br=0,br2=0;
    int i;
    for(i=1;i<=broj;i++)
    {
        if(broj%i==0)
        {
            br++;
        }
    }
    int broj2=broj+1;
    for(i=1;i<=broj2;i++)
    {
        if(broj2%i==0)
        {
            br2++;
        }
    }
    if(br==br2)
        return 1;
    else
        return 0;
}
int main(void)
{
    int broj;
    printf("Unesite neki broj.\n");
    scanf("%d",&broj);
    djeljitelji(broj);
    if(djeljitelji(broj)==1)
        printf("Brojevi %d i %d imaju isti broj djeljitelja.\n",broj,broj+1);
    else
        printf("Brojevi %d i %d nemaju isti broj djeljitelja.\n",broj,broj+1);
    return 0;
}
