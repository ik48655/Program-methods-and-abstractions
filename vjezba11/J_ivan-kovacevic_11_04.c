#include<stdio.h>
void rek_print(int n)
{
    if(n<=0)
        return;
    if(n%2==0)
        n=n-1;
    printf("%d\n",n);
    rek_print(n-2);
}
int main()
{
    int n=46;
    rek_print(n);
    return 0;
}

