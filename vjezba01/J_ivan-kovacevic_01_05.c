#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,rand1,rand2,privr;
    printf("Unesite dva broja: ");
    scanf("%d %d",&a,&b);
    if(b<a)
    {
        privr=a;
        a=b;
        b=privr;
    }
    rand1=a + rand()%(b-a+1);
    rand2=a + rand()%(b-a+1);
    printf("Dva pseudoslucajna broja u intervalu %d i %d su %d i %d\n",a,b,rand1,rand2);
    if(rand2>rand1)
        printf("Veci broj je: %d\n",rand2);
    else
        printf("Veci broj je: %d\n",rand1);
    return 0;
}
