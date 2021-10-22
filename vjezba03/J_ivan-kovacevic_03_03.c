#include <stdio.h>
int slj_prosti(int n)
{
    int br,brojac;
    for(br=n;br>0;br++)
    {
        brojac=2;
        while(brojac<br)
        {
            brojac++;
            if(br%brojac==0)
            {
                break;
            }
        }
        if(brojac==br)
        {
            break;
        }
    }
    return br;
}
int main() {
  int broj,funkcija;
  printf("Unesite neki pozitivan broj: ");
  scanf("%d", &broj);
  funkcija=slj_prosti(broj);
  printf("Sljedeci najmanji prosti broj je: %d",funkcija);
  return 0;
}
/*Program radi s ovom jednom funkcijom, medjutim prekasno sam procitao upute da trebaju biti dvije funkcije */
