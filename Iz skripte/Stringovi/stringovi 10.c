#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void okreni(char *str)
{
    char newString[10][10];
    int i,j=0,br=0;
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            newString[br][j]='\0';
            br++;
            j=0;
        }
        else
        {
            newString[br][j]=str[i];
            j++;
        }
    }
    printf("%s",newString);
}
int main()
{
    char string1[25];
    printf("Unesite neki string.\n");
    fgets(string1,sizeof string1,stdin);
    okreni(&string1);
    return 0;
}
