#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    float duljina;
    float cijena;
    char tip[10];
    int godiste;
}brod;
float duznimetar(brod *br)
{
    return(br->cijena / br->duljina);

}
brod *max(brod *nizbr,int n)
{
    int i;
    int imax=0;
    float maxdm=duznimetar(&nizbr[0]);
    for(i=0;i<n;i++)
    {
        float duzmet=duznimetar(&nizbr[i]);
        if(duzmet<maxdm)
        {
            maxdm=duzmet;
            imax=i;
        }
    }
    return nizbr+imax;
}
int main(void)
{
    brod brodovi[]={{100,50000,"Kruzer",2000},{150,250000,"Jahta",1950},{50,250000,"Barka",1965},{30,1500000,"Autobus",1911}};
    brod *maxbr=max(brodovi,sizeof(brodovi)/sizeof(brodovi[0]));
    printf("Brod koji je najjeftiniji po duznom metru je brod %s i ima cijenu od %f i duzinu %f:\n",maxbr->tip,maxbr->cijena,maxbr->duljina);
    return 0;
}
