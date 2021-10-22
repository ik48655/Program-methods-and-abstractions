
#include <stdio.h>
#include <string.h>
int nta_pozicija(char *string, char c, int n, char *poz)
{
    if(poz == NULL)
    {
        return -1;
    }
    if(n==1)
    {
        return poz-string+1;
    }
    if(n>1)
    {
        poz = strchr(poz+1, c);
        nta_pozicija(string++, c, n-1, poz);
    }
}
int main(void)
{
    char string[] = "popocatepetl";
    char c = 'o';
    int n = 2;
    char *poz = strchr(string, c);
    printf("%d", nta_pozicija(string, c, n, poz));
}

