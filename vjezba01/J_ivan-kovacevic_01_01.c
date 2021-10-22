#include <stdio.h>
int main(void)
{
    char op;
    int a,b;
    printf("Unesite dva broja i operator: ");
    scanf("%d %d %c",&a,&b,&op);
    if (op=='+')
        printf("Zbroj %d i %d je %d",a,b,a+b);
    else if(op=='-')
        printf("Razlika %d i %d je %d",a,b,a-b);
    else if(op=='*')
        printf("Umnozak %d i %d je %d",a,b,a*b);
    else if(op=='/')
        if((a==0) || (b==0))
            printf("Nemoguce je djeliti s nulom!");
        else
            printf("Kolicnik  je %d, ostatak je %d:",a/b,a%b);
    return 0;


}
