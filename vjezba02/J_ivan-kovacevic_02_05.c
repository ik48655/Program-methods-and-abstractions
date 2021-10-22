#include <stdio.h>
int main(void)
{
	int a,b,n,i,zbroj=0,x;
	printf("Unesite interval brojeva ");
	scanf("%d %d",&a,&b);
	printf("Unesite broj n ");
	scanf("%d",&n);
	if(b<a)
	{
		x=b;
		b=a;
		a=x;
	}
	for(i=a+n;i<=b;i=i+n)
	{
		zbroj=zbroj+i;
		printf("Trenutni broj u intervalu brojeva %d i %d je %d\n",a,b,i);
	}
	printf("Zbroj brojeva u intervalu %d - %d je %d",a,b,zbroj);
	return 0;
}
