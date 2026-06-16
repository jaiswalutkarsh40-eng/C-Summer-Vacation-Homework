#include<stdio.h>
int main()
{
    int n;
    printf("enter no. you want to find table:\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        int k=n*i;
        printf("%d X %d = %d\n",n,i,k);
    }
    return 0;

}