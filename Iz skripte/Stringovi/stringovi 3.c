#include<string.h>
#include<stdlib.h>
#include<stdio.h>
char *bezsamoglasnika(char *strin)
{
    int i=0,j=0;
    int n=strlen(strin);
    while(i<=n)
    {
        if(strin[i]!='a' && strin[i]!='e' && strin[i]!='i' && strin[i]!='o' && strin[i]!='u' && strin[i]!='A' && strin[i]!='E' && strin[i]!='I' && strin[i]!='O' && strin[i]!='U')
        {
            strin[j]=strin[i];
            j++;
        }
        i++;
    }
    return strin;
}
int main(void)
{
    char str[]="Popokatepetl";
    printf("%s",bezsamoglasnika(str));
    return 0;
}
