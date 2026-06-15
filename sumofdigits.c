#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter no. you want yo find sum of digits\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum += rem;
        n=n/10;
    }
    printf("sum of digits = %d\n",sum);
    return 0;
}