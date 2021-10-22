#include<stdio.h>
int datum(int dan,int mjesec,int godina)
{
    if((godina>=1900)&&(godina<=2019))
    {
        if((mjesec>0)&&(mjesec<13))
        {

            if((dan>=1 && dan<=31) && (mjesec==1 || mjesec==3 || mjesec==5 || mjesec==7 || mjesec==8 || mjesec==10 || mjesec==12))
                printf("Validan - nije prijestupna\n");
            else if((dan>=1 && dan<=30) && (mjesec==4 || mjesec==6 || mjesec==9 || mjesec==11))
                printf("Validan - nije prijestupna\n");
            else if((dan>=1 && dan<=28) && (mjesec==2))
                printf("Validan - nije prijestupna\n");
            else if(dan==29 && mjesec==2 && (godina%400==0 ||(godina%4==0 && godina%100!=0)))
                printf("Validan - prijestupna\n");
            else
                printf("Nije validan\n");
        }
        else
        {
            printf("Mjesec nije validan!");
        }
    }
    else
    {
        printf("Godina nije validna!");
    }
}
int main(void)
{
    int brosob,dan,mjesec,godina;
    int brojac;brojac=1;
    printf("Unesite broj osoba: ");
    scanf("%d",&brosob);
    while(brojac<=brosob)
    {
        printf("Unesite neki datum: ");
        scanf("%d %d %d",&dan,&mjesec,&godina);
        datum(dan,mjesec,godina);
        brojac=brojac+1;
    }
    return 0;
}
