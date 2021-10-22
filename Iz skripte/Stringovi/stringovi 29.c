#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int jelbroj(char str[13])
{
    int i;
    int brojac;
    for(i=0;i<strlen(str);i++)
    {
        if(isalpha(str[0]))
        {
            return 0;
        }
        else if(str[0]==0)
        {
            if(str[i]!="-" && str[i]!='\0' && isdigit(str[i]))
            {
                brojac++;
            }
        }
    }
    if(brojac==10 || brojac==9)
    {
        return 1;
    }
}
int main(void)
{
    char str[13];
    printf("Unesite string u formatu xxx-xxx-xxx(x).\n");
    fgets(str,sizeof str,stdin);
    int funkcija=jelbroj(str);
    if(funkcija==0)
    {
        printf("%s je telefonski broj.\n",str);
    }
    else
    {
       printf("%s nije telefonski broj.\n",str);
    }
    return 0;
}
