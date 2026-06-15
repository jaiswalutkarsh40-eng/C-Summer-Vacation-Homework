#include<stdio.h>
int main()
{
    int n,rev=0,rem,original;
    printf("enter no. you want to check palindrome\n");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
    {
        printf("palindrome no.\n");
    }
    else
    {
        printf("not palindrome no.\n");
    }
    return 0;
}