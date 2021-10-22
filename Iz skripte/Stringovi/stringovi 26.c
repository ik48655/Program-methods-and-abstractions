#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *recen(char *string1)
{
    char *novi=malloc((strlen(string1)+7)*sizeof(char));
    strcpy(novi,string1);
    int i;
    for(i=0;i<strlen(novi);i++)
    {
        if(novi[i]==' ' && novi[i]!='\0')
        {
            novi[i]='\n';
        }
    }
    novi[i]='.';
    return novi;
}
int main(void)
{
    char recenica[50];
    printf("Unesite neku recenicu.\n");
    fgets(recenica,sizeof recenica,stdin);
    printf("%s\n",recen(&recenica));
    return 0;
}
