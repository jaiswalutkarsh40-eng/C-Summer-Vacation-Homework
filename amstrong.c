#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,original,temp,sum=0,digit=0;
    printf("enter a number\n");
    scanf("%d",&n);
    original=n;
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        digit++;

    }
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+pow(rem,digit);
        temp=temp/10;
    }
    if(original==sum)
    {
        printf("armstrong number\n");
    }
    else
    {
        printf("not armstrong number\n");
    }
    return 0;
}