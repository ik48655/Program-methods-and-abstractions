#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ime[20];
    char prezime[20];
    unsigned jmbag;
    char grupa;
    int postotak;
}popisstudent;


void unos(popisstudent* student, int n)
{
    int i=0;
    while(i<n)
    {
        printf("Unesi ime, prezime, JMBAG, grupu i postotak\n");
        scanf("%s %s %d %c %d", &student[i].ime, &student[i].prezime, &student[i].jmbag, &student[i].grupa, &student[i].postotak);
        i++;
    }
}

popisstudent* filtriranje(popisstudent* student, int n)
{
    int i=0, j;
    popisstudent* odabrani = (popisstudent*)malloc(n*sizeof(student));
    while(i<n)
    {
        if(student[i].postotak >= 40)
        {
            odabrani[j] = student[i];
            j++;
        }
    }
    return odabrani;
}

void theChosenOnes(popisstudent* student, int n)
{
    int i;
    printf("Studenti koji su prosli kolokvij su:\n");
    for(i=0; i<n; i++)
        printf("%s %s %u %c %d\n", student[i].ime, student[i].prezime, student[i].jmbag, student[i].grupa, student[i].postotak);
}

int main()
{
    int n;
    popisstudent* lista;
    printf("Unesi broj studenata: ");
    scanf("%d", &n);
    lista = (popisstudent*)malloc(n*sizeof(popisstudent));
    unos(lista, n);
    popisstudent* odabrani = filtriranje(lista, n);
    theChosenOnes(odabrani, n);
}
