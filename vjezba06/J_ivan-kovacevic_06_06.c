#include <stdio.h>
int *unos(int* n, int *list)
{
    printf("Unesi velicinu niza: ");
    scanf("%d", n);
    list[*n];
    int *p; p=list;
    while(p!=list+*n)
    {
        printf("Unesi broj niza: ");
        scanf("%d", p);
        p=p+1;
    }
    return list;
}

void ispis(int *n, int* p)
{
    float prosjek = 0;
    int i=0;
    while(i<*n)
    {
        prosjek+=*(p+i);
        i=i+1;
    }
    printf("Prosjek niza je %f", prosjek/(*n));

}

int main()
{
    int n;

    int list[100];
    int *p = unos(&n, list);
    ispis(&n, p);
}
