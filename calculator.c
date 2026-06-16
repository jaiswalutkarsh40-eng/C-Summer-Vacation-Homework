#include<stdio.h>
int main()
{
    int a,b,operator;
    printf("1 -> +, 2 -> -, 3 -> *, 4 -> /\n");
    scanf("%d",&operator);
    printf("enter no.");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
        case 1: printf("%d\n",a+b);
                break;
        case 2: printf("%d\n",a-b);
                break;
        case 3: printf("%d\n",a*b);
                break;
        case 4: if(b!=0)
                {
                    printf("%d\n",a/b);
                    break;
                }
                else
                {
                    printf("divisor is zero\n");
                    break;
                }
        default: printf("invalid choice\n");

    }
    return 0;
}