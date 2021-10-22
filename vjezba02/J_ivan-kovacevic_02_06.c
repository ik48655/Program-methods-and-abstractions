#include <stdio.h>
 int main()
{
    int m,n;
    printf("Unesite broj redaka(m) i broj stupaca(n): ");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                {
                    printf("* ");
                }
            }
        if(i%2==1)
            for(int j=0;j<n;j++)
            {
                if(j%2==1)
                {
                    printf(" *");
                }
            }
            printf("\n");
    }

    return 0;
}
