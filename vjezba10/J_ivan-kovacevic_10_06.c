#include <stdio.h>

int funk(FILE *fp)
{
    int a, b, c, d;
    int brojac = 1, redak = 1, zadnjiRedak = 1;
    char slovo;
    float max=0, prosjek;

    fp = fopen("t2.txt", "r");

    if (fp == NULL)
    {
        printf("Fajl s imenom %s ne postoji u folderu.", "t.txt");
        return 0;
    }

    for (slovo = getc(fp); slovo != EOF; slovo = getc(fp))
        if (slovo == '\n')
            brojac = brojac + 1;

    fclose(fp);
    fp = fopen("t2.txt", "r");
    int i=0;
    while(i<brojac)
    {
        fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);
        prosjek = (a+b+c+d)/4;

        if(prosjek > max)
        {
            max = prosjek;
            zadnjiRedak = redak;
        }
        redak++;
        i++;
    }
    fclose(fp);
    return zadnjiRedak;
}

int main()
{
    FILE *fp;
    printf("%d. red ima najvecu proscjenu vrijednost.", funk(fp));
    return 0;
}

