#include<stdio.h>
int maxProductSubArray(int arr[], int no)
{
    int product = 0;
    int max = 1;
    for(int i=0;i<no;i++)
    {
        product=arr[i];
        for(int j=i+1;j<no;j++)
        {
            product = product * arr[j];
            if(product>max)
            {
                max = product;
            }
        }

    }
    return max;
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
    int iRet = maxProductSubArray(arr,no);
    printf("The Maximum Product Subarray : %d\n",iRet);
    return 0;
}