#include<stdio.h>
int fibonacci()
{
   static int trenutni=1, sljedeci=1, zbroj=1;
   trenutni=iduci;
   sljedeci=zbroj;
   zbroj=trenutni+sljedeci;
   return trenutni;
}
int main ()
{
  int i=0;
  while(i<12)
  {
   printf("%d ", fibonacci());
   i++;
  }
  return 0;
}

