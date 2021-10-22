#include <stdio.h>
#include <stdlib.h>

int datum(int dan, int mjesec, int godina)
{
    if(godina>=1900 && godina<=2021)
    {
        if(mjesec>=1 && mjesec<=12)
        {
            if(godina!=2021)
            {
                if((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12))
                    return 1;
                else if((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11))
                    return 1;
                else if((dan>=1 && dan<=28) && (mjesec==2))
                    return 1;
                else if(dan==29 && mjesec==2 && (godina%400==0 ||(godina%4==0 && godina%100!=0)))
                    return 1;
                else
                    return 0;
            }
            else
            {
                if((dan>=1 && dan<=31) && mjesec==1 || mjesec==3)
                    return 1;
                else if((dan>=1 && dan<=28) && (mjesec==2))
                    return 1;
                else if((dan>=1 && dan<=30) && mjesec==4)
                    return 1;
                else if((dan>=1 && dan<=15) && mjesec==5)
                    return 1;
                else
                    return 0;
            }
        }

        else
            return 0;
    }
    else
        return 0;
}

int racun(int dan, int mjesec, int godina)
{
    int brojilo = 0;
    int provjera_validnosti_datuma = datum(dan, mjesec, godina);

    if (provjera_validnosti_datuma)
    {
        int i=godina+1;
        while(i<=2021)
        {
            if(datum(dan, mjesec, i))
            {
                brojilo=brojilo+1;
            }
            i++;
        }
    }
    return brojilo;
}

void konverter(char* string, int *dan, int *mjesec, int* godina)
{
    *dan = atoi(string);
    *mjesec = atoi(string+3);
    *godina = atoi(string+6);
}

int main()
{
    int dan, mjesec, godina;
    char string[10];
    scanf("%s", string);
    konverter(string, &dan, &mjesec, &godina);
    printf("%d", racun(dan, mjesec, godina));
}
