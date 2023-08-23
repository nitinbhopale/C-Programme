#include<stdio.h>

int SecondLargest(int arr[],int n)
{
    int SecLar = 0;
    int large = 0;
    int index = 0;
    for(int i=0;i<n;i++)
    {
        large = arr[0];
        if(arr[i]>large)
        {
            large = arr[i];
            index = i;
        } 
    }
    arr[index] = 0;
    SecLar = arr[0];
    for(int j=0;j<n;j++)
    {
        if(arr[j]>SecLar)
        {
            SecLar = arr[j];
        }
    }

    return SecLar;
}
int main()
{
    int n = 0;
    printf("Enter the Number:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d element:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int iRet = SecondLargest(arr,n);
    printf("Second Largest : %d",iRet);
    return 0;
}