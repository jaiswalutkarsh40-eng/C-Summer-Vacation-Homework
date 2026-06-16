#include<stdio.h>
int main()
{
    int arr[20];
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter element of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
      if(arr[i]>max)
      max=arr[i];
    }
    printf("largest element is %d\n",max);
    return 0;
}