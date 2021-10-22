#include<stdio.h>
int najm3(int prvi, int drugi, int treci)
{
    int min;
    min = (prvi>=drugi) ? drugi : prvi ;
    min = (min>=treci) ? treci : min;
    return min;
}
int main()
{
    int prvi,drugi,treci;
    printf("Unesite tri broja: ");
    scanf("%d %d %d",&prvi,&drugi,&treci);
    printf("%d",najm3(prvi,drugi,treci));
    return 0;
}
