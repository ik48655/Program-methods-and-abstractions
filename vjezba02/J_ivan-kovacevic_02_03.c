#include <stdio.h>
int main(void)
{
    int a,b,m,n;
    printf("Unesite pocetak intervala: ");
    scanf("%d",&a);
    printf("Unesite kraj intervala: ");
    scanf("%d",&b);
    printf("Unesite dva broja m i n: ");
    scanf("%d %d",&m,&n);
    for (a;a<=b;a++)
    {
        if((a%m==0)&&(a%n==0))
        {
            printf("%d FizzBuzz\n ",a);
        }
        else if(a%m==0)
        {
            printf("%d Fizz\n ",a);
        }
        else if(a%n==0)
        {
            printf("%d Buzz\n ",a);
        }
        else
        {
            printf("%d \n",a);
        }
    }
    return 0;
}
