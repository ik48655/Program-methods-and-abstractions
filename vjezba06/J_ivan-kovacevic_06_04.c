#include <stdio.h>

int sumaniza(int *array, int suma, int a)
{
    if(a%2==1)
    {
        suma=suma+array[a];
    }
    return suma;
}
int main(void)
{
    int brojcl,broj,suma=0;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&brojcl);
    int array[brojcl];
    for(int a=0;a<brojcl;a++)
    {
        printf("Unesite %d clan niza: ",a);
        scanf("%d",&array[a]);
        suma=sumaniza(array,suma,a);
    }
    printf("%d",suma);
    return 0;
}
