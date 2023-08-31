//Count pairs with given sum

#include<stdio.h>

int countPairSum(int arr[], int no, int sum)
{
    int count = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if((arr[i]+arr[j])==sum)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int no = 0;
    printf("Enter the Array Size \n");
    scanf("%d",&no);
    int arr[no];
    int sum = 0;
    printf("Enter the Sum \n");
    scanf("%d",&sum);
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",countPairSum(arr,no,sum));
    return 0;
}