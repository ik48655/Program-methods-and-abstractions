#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int varijabla(int *broj)
{
    if(*broj%2==0)
        *broj=(*broj)/2;
    else
        *broj=(*broj)*2;
}
int main(void)
{
    int broj;
    printf("Unesite neki broj:");
    scanf("%d",&broj);
    printf("Uneseni broj je: %d\n",broj);
    varijabla(&broj);
    printf("Novi broj je: %d\n",broj);
    return 0;
}
