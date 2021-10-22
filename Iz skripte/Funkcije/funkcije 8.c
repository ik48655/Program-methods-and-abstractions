#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sumadon3(int n)
{
    int rez=0;
    if(n<3)
        return 0;
    if(n%3==0)
        rez=1;
    return rez*n+sumadon(n-1);
}
int main(void)
{
    int broj;
    printf("Unesite broj do kojeg racunamo sumu.\n");
    scanf("%d",&broj);
    printf("Suma djeljivih s 3 do broja %d je %d.\n",broj,sumadon(broj));
    return 0;
}
