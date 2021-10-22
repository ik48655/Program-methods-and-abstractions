#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *okrenispoji(char *string1,char *string2)
{
    char *novi=malloc((strlen(string1)+strlen(string2)+1)*sizeof(char));
    string1=strrev(string1);
    strcpy(novi,string1);
    string2=strrev(string2);
    strcat(novi,string2);
    return novi;
}
int main(void)
{
    char string1[]="Hello";
    char string2[]="World";
    /* printf("Unesite prvi string.\n");
    fgets(string1,sizeof string1,stdin);
    printf("Unesite drugi string.\n");
    fgets(string1,sizeof string2,stdin); */
    printf("%s",okrenispoji(&string1,&string2));
    return 0;
}
