#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int prosjekdva(int arr[],int n,int arr2[],int n2,double *prosj1,double *prosj2)
{
    int i,j;
    double suma1,suma2;
    for(i=0;i<n;i++)
    {
        suma1+=arr[i];
    }
    *prosj1=suma1/i;
    for(j=0;j<n2;j++)
    {
        suma2+=arr[j];
    }
    *prosj2=suma2/j;
}
int main(void)
{
    double p1,p2;
    int i;
    int arr[]={1,2,3,-4,-5,-60,7,88,-9,10,23,-56,78};
    int arr2[]={1,2,3,-4,-5,-60,7,88,-9,10,23,-56,78};
    int velniza=ARRAY_SIZE(arr);
    int velniza2=ARRAY_SIZE(arr);
    prosjekdva(arr,velniza,arr2,velniza2,&p1,&p2);
    if(p1>p2)
        {
            for(i=0;i<velniza;i++)
            {
                printf("%d",arr[i]);
            }
        }
    else
        for(i=0;i<velniza2;i++)
        {
            printf(" \[%d]\ ",arr2[i]);
        }
    return 0;
}
