#include <stdio.h>
int main(void)
{
    char im,pr,najvim='Z',najvpr='Z',najmim='A',najmpr='A'; /*Ovaj program radi samo za inicijale unešene velikim slovom, tj od 65 do 90, za mala slova bi se trebalo koristiti*/
    do                                                      /*ASCI kod od 97 do 122*/
    {
        printf("Unesite inicijale imena : \n");
        scanf(" %c %c",&im,&pr);
        if(pr<najvpr && im!='0' && pr!='0')
        {
            najvpr=pr;
            najvim=im;
        }
        else if(im<najvim && im!='0' && pr!='0') /*Bez ovog dijela " && im!='0' && pr!='0'" program sprema 0 0 kao zadnji po alfabetu*/
        {                                       /*Ne znam to otkloniti bez dodavanja ovog dijela koda*/
            najvpr=pr;
            najvim=im;
        }
        if(pr>najmpr)
        {
            najmpr=pr;
            najmim=im;
        }
        else if(im>najmim && im!='0' && pr!='0')
        {
            najmpr=pr;
            najmim=im;
        }
    }while((im!='0')&&(pr!='0'));
        printf("Osoba koja je prva u alfabetu je %c %c \n",najvim,najvpr);
        printf("Osoba koja je zadnja u alfabetu je %c %c \n",najmim,najmpr);
    return 0;




}
