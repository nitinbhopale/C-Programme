#include<stdio.h>

int subArrayZeroSum(int arr[], int no)
{
    int flag = 0;
    int sum = 0;
    for(int i=0;i<no;i++)
    {
        sum = 0;
        for(int j=i;j<no;j++)
        {
            sum = sum + arr[j];
            if(sum==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    return flag;
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
    if(subArrayZeroSum(arr,no))
    {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}