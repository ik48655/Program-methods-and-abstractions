#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ponavljanje(char *string, char slovo,char *pozicija,int *brojpon)
{
    *brojpon=0;
    int i;
    *pozicija = strchr(string,slovo)-string+1;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==slovo)
        {
            (*brojpon)++;
        }
    }
}
int main(void)
{
    char string[]="Popokatepetl";
    char slov='p';
    int brojac;
    char pozic;
    ponavljanje(string,slov,&pozic, &brojac);
    printf("Broj ponavljanja slova %c je: %d puta, prvo pojavljivanje slova je pozicija %d",slov,brojac,pozic);
    return 0;
}
