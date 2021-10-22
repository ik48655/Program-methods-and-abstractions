#include <stdio.h>
int m_n(int* m,int* n)
{
    if((*m)%2==0)
    {
        *m = *m/2 ;
        *n = 3*(*n)+1 ;
    }
    else
    {
        printf("Broj m nije paran!");
    }
}
int main()
{
    int m,n;
    printf("Unesite broj m ");
    scanf("%d",&m);
    printf("Unesite broj n ");
    scanf("%d",&n);
    m_n(&m,&n);
    printf("Broj m je %d\n, broj n je %d",m,n);
    return 0;

}
