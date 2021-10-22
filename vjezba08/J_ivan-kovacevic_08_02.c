#include <stdio.h>
#include <string.h>

char* samoglasniciout(char *str)
{
    int i=0, j=0, n = strlen(str) ;
    while(i<=n)
    {
       if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    return str;
}

int main()
{
    char string[] = "heeeeejhjhjeeeeeeeeeeeeeeeeeghiiiiiiiiiiiiiin";
    printf("%s", samoglasniciout(string));

    return 0;
}
