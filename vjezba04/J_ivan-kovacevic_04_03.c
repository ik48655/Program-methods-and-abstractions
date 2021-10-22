#include<stdio.h>
int parnepar(int broj)
{
    if(broj%2==0)
    {
        return broj/2;
    }
    else
    {
        return (3*broj)+1;
    }
}
int main(void)
{
    int broj,funkcija;
    printf("Unesite neki argument n: \n");
    scanf("%d",&broj);
    funkcija=parnepar(broj);
    printf("%d",funkcija);
    return 0;

}
