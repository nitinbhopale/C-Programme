#include<stdio.h>

int SumArray(int arr[], int n )
{
    int Sum = 0;
    for(int i=0;i<n;i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int n = 0;
    printf("Enter the Size of Array : \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    
    int iRet = SumArray(arr, n);

    printf("%d",iRet); 
    return 0;
}