#include <stdio.h>
int main(void)
{
    int a,b,c,min,max,mid;
    printf("Unesite tri cijela broja \n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>=b) && (a>=c))
    {
        max=a;
        if (b>c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
        printf("%d %d %d",min,mid,max);
    }
    else if ((b>=a) && (b>=c))
    {
        max=b;
        if (a>c)
        {
            mid=a;
            min=c;
        }
        else
        {
            mid=c;
            min=a;
        }
        printf("%d %d %d",min,mid,max);
    }
    else if ((c>=a) && (c>=b))
    {
        max=c;
        if (a>b)
        {
            mid=a;
            min=b;
        }
        else
        {
            mid=b;
            min=a;
        }
        printf("%d %d %d",min,mid,max);
    }
    return 0;
}
