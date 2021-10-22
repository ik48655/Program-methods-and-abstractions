#include <stdio.h>
int main(void)
{
    float a,b,c,d,dg,gg,privr;
    printf("Unesite vrijednosti za prvi interval. ");
    scanf("%f %f",&a,&b);
    if(b<a)
    {
        privr=b;
        b=a;
        a=privr;
    }
    printf("Unesite vrijednosti za drugi interval. ");
    scanf("%f %f",&c,&d);
    if(d<c)
    {
        privr=d;
        d=c;
        c=privr;
    }
    if (a >= c & a <= d)
    {
        if (b < d)
            {
                dg=a;
                gg=b;
                printf("Donja granica intervala je %f, gornja granica intervala je %f",dg,gg);
            }
        else
            {
                dg=a;
                gg=d;
                printf("Donja granica intervala je %f, gornja granica intervala je %f",dg,gg);
            }

    }
    else if (c >= a && c <= b)
    {
        if (d < b)
            {
                dg=a;
                gg=d;
                printf("Donja granica intervala je %f, gornja granica intervala je %f",dg,gg);
            }
        else
            {
                dg=a;
                gg=b;
                printf("Donja granica intervala je %f, gornja granica intervala je %f",dg,gg);

            }
    }
    else
        printf("U pitanju je prazan skup (/)");

    return 0;
}
