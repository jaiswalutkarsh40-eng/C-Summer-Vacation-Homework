#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a , b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=c&&a>=b)
    {
        printf("a is greatest");
    }
    else if (b>=c&&b>=a)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    return 0;
}