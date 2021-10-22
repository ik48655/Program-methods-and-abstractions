#include <stdio.h>
double prosjekniza(int niz[], int brojcl)
{
    float suma=0;
    for(int i=0;i<brojcl;i++)
    {
        suma=suma+niz[i];
    }
    return suma/brojcl;
}
void ispis(int niz[], int brojcl)
{
    for(int a=0;a<brojcl;a++)
    {
        printf("%d ",niz[a]);
    }
}
int unos(int niz[],int brojcl)
{
    int i;
    for(i=0;i<brojcl;i++)
    {
        printf("Unesite element niza \n");
        scanf("%d",&niz[i]);
    }
}
int main(void)
{
    int brojcl;
    printf("Unesite broj clanova niza: ");
    scanf("%d",&brojcl);
    int niz[brojcl];
    unos(niz,brojcl);
    ispis(niz,brojcl);
    printf("\n%f je prosjecna vrijednost elemenata u nizu \n",prosjekniza(niz,brojcl));
    return 0;
}
