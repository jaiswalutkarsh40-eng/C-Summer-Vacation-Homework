#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter no. which you want to count digits\n");
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("no. of digits in %d is %d\n",original,count);
    return 0;
}