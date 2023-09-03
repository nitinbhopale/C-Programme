/* Input: arr[] = {8, 3, 1, 2}
Output: 29
Explanation: Lets look at all the rotations,
{8, 3, 1, 2} = 8*0 + 3*1 + 1*2 + 2*3 = 11
{3, 1, 2, 8} = 3*0 + 1*1 + 2*2 + 8*3 = 29
{1, 2, 8, 3} = 1*0 + 2*1 + 8*2 + 3*3 = 27
{2, 8, 3, 1} = 2*0 + 8*1 + 3*2 + 1*3 = 17 */ 

#include<stdio.h>

int maxSumAllRotation(int arr[], int no)
{
    int max = 0;
    int ele = 0;
    int add = 0;
    for(int i=0;i<no;i++)
    {
        add = 0;
        ele = arr[0];
        for(int j=0;j<no-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[no-1]=ele;
        for(int i=0;i<no;i++)
        {
            add = add + (arr[i]*i);
        }
        if(add>max)
        {
            max = add;
        }
    }
    return max;
}
int main()
{
    int no = 0;
    printf("Enter Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Numbers\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    int iRet = maxSumAllRotation(arr,no);
    printf("The Max:%d\n",iRet);
    return 0;
}