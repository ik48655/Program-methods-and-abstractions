#include<stdio.h>
#define OPLOSJE(x,y,z) ( 2*((x*y)+(x*z)+(y*z)) )
#define VOLUMEN(x,y,z) ( x*y*z )
float oplosje_volumen(float a,float b,float c,float*oplosje,float*volumen)
{
    *oplosje=OPLOSJE(a,b,c);
    *volumen=VOLUMEN(a,b,c);
}
int main()
{
    float a, b, c,oplosje,volumen;
    printf("Unesite duzinu kvadra: ");
    scanf("%f",&a);
    printf("Unesite sirinu kvadra: ");
    scanf("%f",&b);
    printf("Unesite visinu kvadra: ");
    scanf("%f",&c);
    oplosje_volumen(a,b,c,&oplosje,&volumen);
    printf("%f %f",oplosje,volumen);
    return 0;
}
