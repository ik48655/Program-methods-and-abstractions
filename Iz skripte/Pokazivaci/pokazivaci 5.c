#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int poznegprosj(int arr[],int n,double *prosjn,double *prosjp)
{
    int i;
    double sumap=0,suman=0,brp=0,brn=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sumap+=arr[i];
            brp++;
        }
        else
        {
            suman+=arr[i];
            brn++;
        }
    }
    *prosjn=suman/brn;
    *prosjp=sumap/brp;
}
int main(void)
{
    double pp,pn;
    int arr[]={1,2,3,-4,-5,-60,7,88,-9,10,23,-56,78};
    int velniza=ARRAY_SIZE(arr);
    poznegprosj(arr,velniza,&pn,&pp);
    printf("Prosjek pozitivnih brojeva u nizu je %lf\nProsjek negativnih brojeva u nizu je %lf\n",pp,pn);
    return 0;
}
