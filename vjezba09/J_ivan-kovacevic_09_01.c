#include<stdio.h>

#define NAJVECI(x, y, z) ( (x > y && x > z) ? x : ( y > z) ? y : z )
#define NAJMANJI(x, y, z) ( (x < y && x < z) ? x : ( y < z) ? y : z )

int main()
{
    int a, b, c;

    printf("Unesite tri broja: \n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Najveci od tri broja je: %d\n", NAJVECI(a, b, c));
    printf("Najmanji od tri broja je: %d\n", NAJMANJI(a, b, c));

    return 0;
}
