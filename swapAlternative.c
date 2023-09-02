#include<stdio.h>

void swapAlternative(int arr[], int no)
{
    int temp = 0;
    for(int i=0;i<no/2;i=i+2)
    {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    for(int i=0;i<no;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int no = 0;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Numbers\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array:");
    swapAlternative(arr,no);
    return 0;
}