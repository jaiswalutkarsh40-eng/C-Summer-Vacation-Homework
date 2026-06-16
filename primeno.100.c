#include<stdio.h>
int main()
{
    int n=100;
    printf("enter 1 to 100 prime no.\n");
    printf("1 is a prime no.\n");
    for(int i=2;i<n;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d is a prime no.",i);
            printf("\n");
        }
    }
    return 0;
}