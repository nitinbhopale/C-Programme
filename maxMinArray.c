#include<stdio.h>
int MaxMin(int arr[],int n)
{
    int Max = arr[0];
    int Min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Max)
        {
            Max = arr[i];
        }
        if(arr[i]<Min)
        {
            Min = arr[i];
        }
    }
    printf("Max:%d\nMin:%d\n",Max,Min);
    return 0;
}
int main()
{
    int n = 0;
    printf("Enter the number:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the %d Numbers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    MaxMin(arr,n);
    
    return 0;
}