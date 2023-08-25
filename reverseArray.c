#include<stdio.h>

int reverse(int arr[],int no)
{
    int brr[no];
    int temp =  no-1;
    for(int j=0;j<no;j++)
    {
        brr[j] = arr[temp];
        temp--;
    }
    printf("The Reverse Array is :");
    for(int k=0;k<no;k++)
    {
        printf("%d ",brr[k]);
    }
    return 0;
}
int main()
{
    int no = 0;
    printf("Enter the Number \n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,no);
    return 0;
}