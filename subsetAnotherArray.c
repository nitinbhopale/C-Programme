#include<stdio.h>

int subsetAnotherArray(int arr[], int brr[], int no, int no2)
{
    int flag = 0;
    for(int i=0;i<no2;i++)
    {
        flag = 0;
        for(int j=0;j<no;j++)
        {
            if(brr[i]==arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int no = 0;
    int no2 = 0;
    printf("Enter the First Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Second Array Size\n");
    scanf("%d",&no2);
    int brr[no2];
    printf("Enter %d Elements\n",no2);
    for(int i=0;i<no2;i++)
    {
        scanf("%d",&brr[i]);
    }

    if(subsetAnotherArray(arr,brr,no,no2))
    {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}