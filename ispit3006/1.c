#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* join(char* a, char* b)
{
    char* novi = malloc((strlen(a) + strlen(b) + 1) * sizeof(char)); //Alociramo memoriju za novonastali string
    strcpy(novi, a); // U novi string dodajemo prvi string tj izvodjaca pjesme
    strcat(novi,"-"); //Stavljamo izmedju izvodjaca i naziva pjesme minus
    strcat(novi, b); //Nakon minusa dodajemo naziv pjesme
    strcat(novi,".mp3"); //Na kraj dodajemo format .mp3
    int i;
    for(i=0;i<strlen(novi);i++) //Ovdje brojac prolazi kroz cijeli string
    {
        if(novi[i]==' ') //Ukoliko brojac naidje na prazno mjesto
        {
            novi[i]='_'; //Prazno mjesto se zamjenjuje donjom crtom
        }
    }
    for(i=0;i<strlen(novi);i++) //Brojac opet prolazi kroz cijeli string
    {
        if(novi[i]>='A' && novi[i]<='Z') //Ukoliko je neko slovo veliko
        {
            novi[i]=novi[i]+32; //Mjenja se odmah u malo tako da je string cijeli ispisan malim slovima
        }
    }
    for(i=0;i<strlen(novi);i++) //Brojac opet prolazi kroz string
    {
        if(novi[0]>='a' && novi[0]<='z') //Ukoliko je prvo slovo malo mjenja ga u veliko
        {
            novi[0]=novi[0]-32;
        }
        if(novi[i]=='_' && (novi[i+1]>='a' && novi[i+1]<='z')) //Ukoliko je nakon donje crte slovo malo promjenjuje se u veliko slovo
        {
            novi[i+1]=novi[i+1]-32;
        }
        if(novi[i]=='-' && (novi[i+1]>='a' && novi[i+1]<='z')) //Ukoliko je nakon crte slovo malo promjenjuje se u veliko slovo
        {
            novi[i+1]=novi[i+1]-32;
        }
    }
    return novi;
}

int main(void)
{
    char string1[]="the beat fleet";
    char string2[]="malo san maka";
    char string3[]="the BEAT fleet";
    char string4[]="malo san maka";
    char string5[]="TBF";
    char string6[]="malo SAN maka";
    printf("%s\n",join(&string1,&string2));
    printf("%s\n",join(&string3,&string4));
    printf("%s\n",join(&string5,&string6));
    return 0;
}
