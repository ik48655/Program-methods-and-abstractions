#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int jelsamoglasnik(char c)
{
    int i,d;
    char samoglasnici[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    d=sizeof(samoglasnici)/sizeof(samoglasnici[0]);
    for(i=0;i<d;i++)
    {
        if(c==samoglasnici[i])
            return 1;
    }
    return 0;
}
void preuredirec(char *recenica,int d)
{
    int i,j=0;
    char *nova=(char*)malloc(2*d*sizeof(char));
    for(i=0;i<d;i++,j++)
    {
        if(jelsamoglasnik(recenica[i]))
        {
            nova[j++]=recenica[i];
            nova[j++]='p';
        }
        nova[j]=recenica[i];
    }
    nova[j]='\0';
    strcpy(recenica,nova);
    free(nova);
}
int main(void)
{
    int d;
    char recenica[]="Ja sam dobro";
    d=sizeof(recenica)/sizeof(recenica[0]);
    printf("Unijeli ste recenicu:\n%s\n Recenica nakon promjene: \n",recenica);
    preuredirec(recenica,d);
    printf("%s",recenica);
    return 0;
}
