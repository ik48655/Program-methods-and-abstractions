#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int najveciunizu(int arr[],int n,int *k)
{
    int najveci=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(najveci<arr[i])
        {
            najveci=arr[i];
            *k=i;
        }
    }
    return najveci;
}
int main(void)
{
    int k;
    int arr[]={1,2,3,4,5,60,7,8,9,10};
    int velniza=ARRAY_SIZE(arr);
    printf("%d\n",najveciunizu(arr,velniza,&k));
    printf("%d",k);
    return 0;
}
