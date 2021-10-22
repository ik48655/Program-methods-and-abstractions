#include <stdio.h>
#include <string.h>

int pozicija(char* string, char slovo)
    {
        char* poz=strchr(strchr(string, slovo)+1, slovo);
        return poz? poz-string+1 : -1;
    }

int main(void)
{
    char string[] = "ONoffON";
    char slovo = 'O';

    printf("Druga pozicija slova je %d.", pozicija(string, slovo));

    return 0;
}
