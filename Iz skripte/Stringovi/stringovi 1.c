#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void brojznsl(char *string,int *brojsl, int *brojzn)
{
    *brojsl=0;
    *brojzn=0;
    int i;
    for(i=0;i<strlen(string);i++)
    {
        if(isalpha(string[i]))
        {
            (*brojsl)++;
        }
        if(isdigit(string[i]))
        {
            (*brojzn)++;
        }
    }
}
int main(void)
{
    char recenica[50];
    int brojevi;
    int slova;
    printf("Unesite neku recenicu.\n");
    fgets(recenica,sizeof recenica,stdin);
    brojznsl(&recenica,&slova,&brojevi);
    printf("Broj slova u stringu je %d.\n",slova);
    printf("Broj brojeva u stringu je %d.\n",brojevi);
    return 0;
}
