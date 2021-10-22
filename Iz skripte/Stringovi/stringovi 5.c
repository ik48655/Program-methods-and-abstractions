#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int prosjek(char *string, double *prosjnp, double *prosjp)
{
    int i,brojac=0;
    for(i=0;i<strlen(string);i++)
    {
        if(isdigit(string[i]))
        {
            brojac++;
        }
    }
    if(brojac==strlen(string))
    {
        printf("Uneseni string je broj.\n");
    }
    else
    {
        return;
    }
    int broj=atoi(string);
    int znm;
    double sumap=0,sumanp=0,brp=0,brnp=0;
    while(broj>0)
    {
        znm=broj%10;
        if(znm%2!=0)
        {
            sumanp+=znm;
            brnp++;
        }
        else
        {
            sumap+=znm;
            brp++;
        }
        broj=broj/10;
    }
    *prosjnp=sumanp/brnp;
    *prosjp=sumap/brp;
    return broj;
}
int main(void)
{
    char broj[50];
    double neparni;
    double parni;
    printf("Unesite neki string.\n");
    scanf("%s",&broj);
    prosjek(broj,&neparni,&parni);
    if(parni!=0 && neparni!=0)
    {
        printf("Prosjek neparnih znamenki broja %s je: %lf.\n",broj,neparni);
        printf("Prosjek parnih znamenki broja %s je: %lf.\n",broj,parni);
    }
    else
    {
        printf("Uneseni string \"%s\" je string a ne broj.\n",broj);
    }
    return 0;
}
