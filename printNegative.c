#include<stdio.h>

int Negative(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d \n",arr[i]);
        }
    }
    return 0;
}
int main()
{
    int n = 0;
    printf("Enter the Number : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Numbers :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Negatives Numbers:\n");
    Negative(arr,n);
    return 0;
}