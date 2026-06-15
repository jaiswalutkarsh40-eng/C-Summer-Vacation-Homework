#include<stdio.h>
int main()
{
    int n, count=0;
    printf("enter no. you want to check\n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("not prime\n");
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("prime no.\n");
    }
    return 0;
}