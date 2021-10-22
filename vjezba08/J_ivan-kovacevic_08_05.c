#include <stdio.h>
#include <string.h>

char* konkatenacija(char* str1, char* str2, char* str3)
{
    if((strlen(str1)<strlen(str2)) && (strlen(str1)<strlen(str3)))
    {
        strncat(str3, str2, strlen(str2));
        return str3;
    }
    else if((strlen(str2)<strlen(str3)) && (strlen(str2)<strlen(str1)))
    {
        strncat(str1, str3, strlen(str3));
        return str1;
    }
    else
    {
        strncat(str2, str1, strlen(str1));
        return str2;
    }
}

int main() {
    char string1[]="Najnajveca";
    char string2[]="Srednja";
    char string3[]="Mala";
    printf("%s", konkatenacija(string1, string2, string3));

}
