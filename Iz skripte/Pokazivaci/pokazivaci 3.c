#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int najvnajm(int arr[],int n,int *najveci,int *najmanji)
{
    *najveci=0;
    *najmanji=10000;
    int i;
    for(i=0;i<n;i++)
    {
        if(*najveci<arr[i])
        {
            (*najveci)=arr[i];
        }
        if(*najmanji>arr[i])
        {
            (*najmanji)=arr[i];
        }
    }
}
int main(void)
{
    int v,m;
    int arr[]={-1000,2,3,4,5,60,7,8,-9,10};
    int velniza=ARRAY_SIZE(arr);
    najvnajm(arr,velniza,&v,&m);
    printf("Najveci broj u nizu je: %d, najmanji broj u nizu je: %d.\n",v,m);
    return 0;
}
