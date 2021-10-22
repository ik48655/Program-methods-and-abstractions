#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void swap(int *prvi, int *drugi) // Ovdje zamjenjujemo vrijednosti dviju varijabli, prva postaje druga, a druga prva tako da na kraju bude (a,b -> b,a)
{
    int privr = *prvi;
    *prvi = *drugi;
    *drugi = privr;
}

void segregateElements(int arr[], int n,int djel)
{
    int i =0,j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i]%djel==0) //Provjeravamo da li je ostatak pri djeljenju clana niza s djeljiteljem nula,ukoliko je ostatak nula, on ide na prvo mjesto
        {
            if (i != j)
            {
                swap(&arr[i],&arr[j]); //Zamjenjujemo vrijednosti onih djeljivih s n i onih nedjeljivih
            }
            j++;
        }
    }
}
int main()
{
    int arr[]={23,24,25,26};
    int djel=6;
    int n = ARRAY_SIZE(arr); //Ovim dobijamo velicinu niza da mozemo postaviti gornju granicu za brojac
    int i = 0;
    segregateElements(arr, n, djel);
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
