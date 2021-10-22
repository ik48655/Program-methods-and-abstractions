#include <stdio.h>

typedef struct
{
    int brojnik, nazivnik;
}razlomak;

void zbroj(razlomak* a, razlomak* b, razlomak* zbroj)
{
    zbroj->brojnik = (a->brojnik)*(b->nazivnik)+(b->brojnik)*(a->nazivnik);
    zbroj->nazivnik = (a->nazivnik)*(b->nazivnik);

    int i=1, n, max;
    if(zbroj->brojnik < zbroj->nazivnik)
        n = zbroj->brojnik;
    else
        n = zbroj->nazivnik;

    while(i<=n)
    {
        if((zbroj->brojnik%i==0) && (zbroj->nazivnik%i==0))
        {
            max=i;
        }
        ++i;
    }

    zbroj->brojnik /= max;
    zbroj->nazivnik /= max;
}

void razlika(razlomak* a, razlomak* b, razlomak* razlika)
{
    razlika->brojnik = (a->brojnik)*(b->nazivnik)-(b->brojnik)*(a->nazivnik);
    razlika->nazivnik = (a->nazivnik)*(b->nazivnik);

    int i=1, n, max;
    if(razlika->brojnik < razlika->nazivnik)
        n = razlika->brojnik;
    else
        n = razlika->nazivnik;

    while(i<=n)
    {
        if((razlika->brojnik%i==0) && (razlika->nazivnik%i==0))
        {
            max=i;
        }
        ++i;
    }

    razlika->brojnik /= max;
    razlika->nazivnik /= max;
}

void umnozak(razlomak* a, razlomak* b, razlomak* umnozak)
{
    umnozak->brojnik = (a->brojnik)*(b->nazivnik);
    umnozak->nazivnik = (a->nazivnik)*(b->brojnik);

    int i=1, n, max;
    if(umnozak->brojnik < umnozak->nazivnik)
        n = umnozak->brojnik;
    else
        n = umnozak->nazivnik;

    while(i<=n)
    {
        if((umnozak->brojnik%i==0) && (umnozak->nazivnik%i==0))
        {
            max=i;
        }
        ++i;
    }

    umnozak->brojnik /= max;
    umnozak->nazivnik /= max;
}

void kolicnik(razlomak* a, razlomak* b, razlomak* kolicnik)
{
    kolicnik->brojnik = (a->brojnik)*(b->nazivnik)+(b->brojnik)*(a->nazivnik);
    kolicnik->nazivnik = (a->nazivnik)*(b->nazivnik);

    int i=1, n, max;
    if(kolicnik->brojnik < kolicnik->nazivnik)
        n = kolicnik->brojnik;
    else
        n = kolicnik->nazivnik;

    while(i<=n)
    {
        if((kolicnik->brojnik%i==0) && (kolicnik->nazivnik%i==0))
        {
            max=i;
        }
        ++i;
    }

    kolicnik->brojnik /= max;
    kolicnik->nazivnik /= max;
}

int main()
{
    razlomak a, b, zbroj, razlika, umnozak, kolicnik;

    printf("Unesi brojnik prvog razlomka: \n");
    scanf("%d", &a.brojnik);

    printf("Unesi nazivnik prvog razlomka: \n");
    scanf("%d", &a.nazivnik);

    printf("Unesi brojnik drugog razlomka: \n");
    scanf("%d", &b.brojnik);

    printf("Unesi nazivnik drugog razlomka: \n");
    scanf("%d", &b.nazivnik);

    zbroj(&a, &b, &zbroj);
    razlika(&a, &b, &razlika);
    umnozak(&a, &b, &umnozak);
    kolicnik(&a, &b, &kolicnik);

    printf("Zbroj je %d/%d\n", zbroj.brojnik, zbroj.nazivnik);
    printf("Razlika je %d/%d\n", razlika.brojnik, razlika.nazivnik);
    printf("Umnozak je %d/%d\n", umnozak.brojnik, umnozak.nazivnik);
    printf("Kolicnik je %d/%d\n", kolicnik.brojnik, kolicnik.nazivnik);
}
