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
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
      if(arr[i]<min)
      min=arr[i];
    }
    printf("smallest element is %d\n",min);
    return 0;
}