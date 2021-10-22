#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int udaljenost(char znak1,char znak2)
{
    int udalj;
    if(!isalpha(znak1) || !isalpha(znak2))
    {
        return -1;
    }
    if(znak1 >= 'a' && znak1<='z' || znak2 >= 'a' && znak2 <= 'z')
    {
        znak1=toupper(znak1);
        znak2=toupper(znak2);
    }
    udalj=znak2-znak1;
    return udalj;
}
int main(void)
{
    char zn1='F';
    char zn2='q';
    if(udaljenost(zn1,zn2)==-1)
    {
        printf("%d",-1);
    }
    else
    {
        printf("Udaljenost znakova %c i %c je %d",zn1,zn2,udaljenost(zn1,zn2));
    }
    return 0;
}
