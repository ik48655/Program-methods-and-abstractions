#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void neparjedan(int broj)
{
    if(broj==1)
        return;
    if(broj%2!=0)
    {
        printf(" %d\n",broj);
    }
    neparjedan(broj-1);

}
int main(void)
{
    int br;
    printf("Unesite broj od kojeg brojimo do jedinice.\n");
    scanf("%d",&br);
    neparjedan(br);
    return 0;
}
