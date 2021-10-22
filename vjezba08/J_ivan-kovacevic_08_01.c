#include <stdio.h>
#include <string.h>
int anagram(char* str1,char* str2)
{
    int i,j,duzstr1,duzstr2;
    duzstr1=strlen(str1);
    duzstr2=strlen(str2);
    char privr;
    if(duzstr1!=duzstr2)
    {
        printf("Stringovi nisu iste duljine.\n");
    }
    else
    {
        printf("Stringovi su iste duljine.\n");
    }
   for (i = 0; i < duzstr1-1; i++)
        {
          for (j = i+1; j < duzstr1; j++)
            {
                 if (str1[i] > str1[j])
                        {
                        privr  = str1[i];
                        str1[i] = str1[j];
                        str1[j] = privr;
                        }
            }
        }
        for (i = 0; i < duzstr2-1; i++)
        {
          for (j = i+1; j < duzstr2; j++)
            {
                 if (str2[i] > str2[j])
                        {
                        privr  = str2[i];
                        str2[i] = str2[j];
                        str2[j] = privr;
                        }
            }
        }
  for(i = 0; i<duzstr1; i++)
    {
      if(str1[i] != str2[i])
      {
          return 0;
      }
    }
    return 1;
}
int main(void)
{
    char str1[]="trava";
    char str2[]="vatra";
   if(anagram(str1,str2))
        printf("Stringovi su anagrami");
    else
        printf("Stringovi nisu anagrami");
    return 0;
}
