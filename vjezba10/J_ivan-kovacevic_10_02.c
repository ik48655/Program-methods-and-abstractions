#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char* mala_slova(FILE*fp,int *x)
{
    char ch,*str,brailo=0;
    fseek(fp,0,SEEK_END);
    *x=ftell(fp);
    str=(char*)malloc(*x*sizeof(char));
    fseek(fp,0,SEEK_SET);
    while((ch=fgetc(fp))!=-1)
    {
        if(islower(ch))
        {
            str[cnt]=ch;
            brailo++;
        }
    }
    str[cnt]='\0';
    return str;
}
int main()
{
    int x=0;
    char *str;
    FILE*fp = fopen("drugizad.txt","r");
    if (!fp)
        return -1;
    str=mala_slova(fp,&x);
    printf("%s",str);
    fclose(fp);
    free(str);
    return 0;
}

