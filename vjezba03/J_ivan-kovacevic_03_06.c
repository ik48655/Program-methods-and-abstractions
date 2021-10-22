#include<stdio.h>
int check(char c)
{
    int x;
    switch(c)
    {
    case '0'...'9':
        x=c-'0';
        printf("Kvadrat unesene znamenke je: %d \n",x*x);
        return 3;
        break;
    case 'A'...'Z':
        printf("Veliko slovo\n");
        return 2;
        break;
    case 'a'...'z':
        printf("Malo slovo\n");
        return 1;
        break;
    default:
        printf("0");
    }
    return c;
}
int main(void)
{
    char unos,ispis;
    while(unos!='.')
    {
        printf("\nUnesite neki znak \n");
        scanf(" %c",&unos);
        ispis=check(unos);
        printf("%d",ispis);
    }
    return 0;
}
