#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void dostotinu(void)
{
    int i=1;
    while(i!=100)
    {
        int suma=0;suma+=(i%10)+(i/10);
        if(i%suma==0)
        {
            printf("Broj %d - je djeljiv sa svojom sumom (%d)\n",i,suma);
            i++;
        }

        else
        {
            printf("Broj %d - nije djeljiv sa svojom sumom (%d)\n",i,suma);
            i++;
        }
    }
}
int main(void)
{
    dostotinu();
    return 0;
}
