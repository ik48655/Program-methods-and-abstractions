#include<stdio.h>
void rek_binarni(int n,int cnt)
{
    if(cnt<0)
        return;
    printf("%d",(n>>cnt)&1);
    rek_binarni(n,cnt-1);
}
int main()
{
    int n=29,cnt=0;
    int broj=n;
    while(n)
    {
        cnt+=1;
        n>>=1;
    }
    rek_binarni(broj,cnt-1);
    return 0;
}
