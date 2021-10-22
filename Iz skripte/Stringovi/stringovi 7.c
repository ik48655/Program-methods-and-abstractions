#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int *podstring(char *string, char *podstr,char *ret)
{
    *ret = strstr(string,podstr);
}
int main(void)
{
    char str[25];
    char substr[10];
    char ret;
    printf("Unesite neki string.\n");
    fgets(str,sizeof str,stdin);
    printf("Unesite trazeni podstring.\n");
    fgets(substr,sizeof substr,stdin);
    podstring(&str,&substr,&ret);
    if(ret)
    {
        printf("Podstring %s se nalazi u stringu %s.\n",substr,str);
    }
    else
    {
        printf("Podstring %s se ne nalazi u stringu %s.\n",substr,str);
    }

    return 0;
}
