/*
    Input : A[]={3, 3, 4, 2, 4, 4, 2, 4, 4}
    Output : 4
    Explanation: The frequency of 4 is 5 which is greater than the half of the size
     of the array size. 
*/

#include<stdio.h>

int majorityElement(int arr[],int no)
{
    int cnt = 0;
    int max = 0;
    int majority_element = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt>max)
        {
             max = cnt;
             majority_element = arr[i];
        }
    }
    return majority_element;
}
int main()
{
    int no = 0;
    printf("Enter Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The Majority Element is : ");
    int iRet = majorityElement(arr,no);
    printf("%d",iRet);
    return 0;
}