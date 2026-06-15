#include<stdio.h>
int main()
{
    int n;
    printf("enter no. you want to check\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("no. is even\n");
    }
    else
    {
        printf("no. is odd");
    }
    return 0;
}