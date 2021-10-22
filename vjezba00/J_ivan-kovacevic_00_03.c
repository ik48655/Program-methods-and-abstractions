#include <stdio.h>
int main(void)
{
    int a,b,privr;
    printf("Unesite dva broja\n");
    scanf("%d %d",&a,&b);
    privr=a;
    a=b;
    b=privr;
    printf("Uneseni brojevi su %d %d\n",a,b);
    return 0;
}
