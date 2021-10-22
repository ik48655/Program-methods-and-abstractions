#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void djeljitelji2(int k)
{
    int i,j,brdjel;
    for(i=0;i<1000;i++)
    {
        brdjel=0;
        for(j=1;j<=i;j++)
        {
            if(!(i%j))
            {
                brdjel+=1;
            }
        }
        if(brdjel==k)
        {
            printf("%d\n",i);
        }
    }

}
int main(void)
{
    int kti;
    printf("Unesite djeljitelj k.\n");
    scanf("%d",&kti);
    djeljitelji2(kti);
    return 0;
}
