#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\n %d\n %d\n",a,b);
    return 0;
}