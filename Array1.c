#include<stdio.h>

int main()
{
    int n = 0;
    
    printf("Enter How many number you want : \n ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        printf("%d \n",arr[j]);
    }
    return 0;
}