// first repeating element
#include<stdio.h>

int firstRepeatingElement(int arr[], int no)
{
    int ele = 0;
    int flag = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                ele = arr[i];
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    return ele;
}

int main()
{
    int no =0;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    int iRet = firstRepeatingElement(arr,no);

    printf("First Repeating Element : %d\n",iRet);
    return 0;
}