#include<stdio.h>

int missingNumber(int arr[], int no)
{
    int missingNum = 0;
    int flag = 0;
    for(int i=no;i>0;i--)
    {
        for(int j=0;j<no-1;j++)
        {
            if(arr[j]==i)
            {
                flag = 0;
                break;
            }
            else {
                flag = 1;
            }
        }
        if(flag==1)
        {
            missingNum = i;
        }
    }
    return missingNum;
}
int main()
{
    int no = 0;
    printf("Enter the Last Number\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no-1);
    for(int i=0;i<no-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("%d\n",missingNumber(arr,no));
    return 0;
}