#include<stdio.h>

int kLargest(int arr[],int kth, int no)
{
    int kLarge = 0;
    for(int i=0;i<no;i++)
    {
        int temp = 0;
        for(int j=i+1;j<no;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[kth-1];
}
int main()
{
    int no = 0;
    int kth = 0;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter the %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Kth Element\n");
    scanf("%d",&kth);

    if(no<kth)
    {
        printf("Array Size is Exceed \n");
    }else {
        int iRet = kLargest(arr,kth,no);
        printf("The %d Largest Element:%d\n",kth,iRet);
    }
    return 0;
}