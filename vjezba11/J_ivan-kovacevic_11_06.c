#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ime[50];
    char prezime[50];
    int ocjena;
}ucenik;

void ispis_niza(ucenik* uc, int duljina)
{
    int i=0;
    while(i<duljina)
    {
      printf("%s %s %d\n", uc[i].ime, uc[i].prezime, uc[i].ocjena);
      i++;
    }
    puts("\n");
}

ucenik* unos_niza(FILE* fp, int* duljNiza)
{
    int i=0, d=10;
    ucenik* student = (ucenik*)malloc(d*sizeof(ucenik));
    if(!student) return NULL;
    while (fscanf(fp, "%s %s %d\n", student[i].ime, student[i].prezime, &student[i].ocjena) != EOF)
    {
        if (++i > *duljNiza)
        {
            d *= 2;
            student = (ucenik*) realloc(student, d * sizeof(ucenik));
            if (!student)
            {
                return NULL;
            }
        }
    }
    *duljNiza = i;
    return student;
}

int sortiranje_uzlazno(const void* p, const void* q)
{
    ucenik* u1 = (ucenik*)p;
    ucenik* u2 = (ucenik*)q;
    return u1-> ocjena - u2 -> ocjena;
}

int sortiranje_silazno(const void* p, const void* q)
{
    ucenik* u1 = (ucenik*)p;
    ucenik* u2 = (ucenik*)q;
    if((u1->ocjena - u2->ocjena)<0) return 1;
    if((u1->ocjena - u2->ocjena)>0) return -1;
    else return 0;
}


int main(void)
{
    int d;
    FILE* fp = fopen("ucenici.txt", "r");
    ucenik* uc = NULL;
    uc = unos_niza(fp, &d);
    fclose(fp);

    qsort(uc, d, sizeof(ucenik), sortiranje_uzlazno);
    ispis_niza(uc, d);

    qsort(uc, d, sizeof(ucenik), sortiranje_silazno);
    ispis_niza(uc, d);

    free(uc);
    return 0;
}

