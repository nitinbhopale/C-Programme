#include<stdio.h>

int moveZero(int arr[], int no)
{
    int temp = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k=0;k<no;k++)
    {
        printf("%d  ",arr[k]);
    }
    return 0;
}

int main()
{
    int no = 0;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    moveZero(arr,no);
    return 0;
}