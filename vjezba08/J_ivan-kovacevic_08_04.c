/*Napisati funkciju koja će iz stringa koji predstavlja url izvući (i vratiti) url root-a
(bez oznake protokola). Primjer: Za url http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt adresa
root-a je www.hackcanada.com.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* vracaRoot(char *str)
{
    int i=0, j = 0, drugi, treci;
    char* noviStr;
    char* drugiSlash = strchr(strchr(str, '/')+1,'/');
    char* treciSlash = strchr(drugiSlash+1,'/');
    drugi = (int)(drugiSlash-str);
    treci = (int)(treciSlash-str);
    noviStr = (char*)malloc((treci-drugi)+1*sizeof(char));
    while(i<strlen(str))
    {
        if(i>drugi)
        {
            while(i<treci)
            {
                noviStr[j]=str[i];
                j++;
                i++;
            }
        }
        noviStr[j]='\0';
        i++;
    }
    return noviStr;
}
int main(void)
{
    char* root;
    char str[] = "http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";
    root = vracaRoot(str);
    puts(root);
    free(root);
    return 0;
}

