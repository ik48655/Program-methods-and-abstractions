#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ARRAY_SIZE(a)(sizeof(a)/sizeof(a[0]))
int vratiniz(char *str,int *arr)
{
    int i;
    int brojzn=0;
    for(i=0;i<strlen(str);i++)
    {
        if(!isalpha(str[i]))
        {
            brojzn++;
        }
    }
    int *j =malloc(brojzn*sizeof(int));
    for(i=0;i<strlen(str);i++)
    {
        if(!isalpha(str[i]))
        {
            arr[i]=str[i];
        }
    }
    return brojzn;
}
int main(void)
{
    char string[]="a1b2cde456";
    char niz[10];
    vratiniz(&string,&niz);
    int i;
    for(i=0;i<10;i++)
        printf(" %d ",niz[i]);
    return 0;
}
