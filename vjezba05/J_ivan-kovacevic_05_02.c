#include<stdio.h>
int funkcija(int a, int b)
{
    int zbr_razl = (a>=b) ? a-b : a+b;
}
int main()
{
    int a,b;
    printf("Unesite dva broja: ");
    scanf("%d %d",&a,&b);
    printf("%d",funkcija(a,b));
    return 0;
}
