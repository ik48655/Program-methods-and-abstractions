
#include <stdio.h>
struct VRIJEME {
   int sek;
   int min;
   int sati;
};

void vremenskaRazlika(struct VRIJEME poc, struct VRIJEME zav, struct VRIJEME *razlika)
{
   while (zav.sek < poc.sek)
    {
      --zav.min;
      zav.sek += 60;
   }

   while (zav.min < poc.min)
    {
      --zav.sati;
      zav.min += 60;
   }

   razlika->sek = zav.sek - poc.sek ;
   razlika->min = zav.min - poc.min ;
   razlika->sati = zav.sati - poc.sati ;
}

int main() {
   struct VRIJEME pocVrijeme,zavVrijeme,razlika;

   printf("Unesite pocetno vrijeme u formatu hh.mm.ss: ");
   scanf("%d %d %d", &pocVrijeme.sati, &pocVrijeme.min, &pocVrijeme.sek );

   printf("Unesite zavrsno vrijeme u formatu hh.mm.ss: ");
   scanf("%d %d %d", &zavVrijeme.sati, &zavVrijeme.min, &zavVrijeme.sek );

   vremenskaRazlika(pocVrijeme,zavVrijeme,&razlika);
   printf("\nVremenska razlika je:  %d:%d:%d - ", pocVrijeme.sati, pocVrijeme.min, pocVrijeme.sek );
   printf("%d:%d:%d ", zavVrijeme.sati,zavVrijeme.min,zavVrijeme.sek);
   printf("= %d:%d:%d\n", razlika.sati, razlika.min, razlika.sek);
   return 0;
}

