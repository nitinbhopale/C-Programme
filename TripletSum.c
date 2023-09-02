/*
    Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
    Output: 12, 3, 9 
    Explanation: There is a triplet (12, 3 and 9) present 
    in the array whose sum is 24. 
*/

#include<stdio.h>

void TripletSum(int arr[],int sum, int no)
{
    int add = 0;
    int flag = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            for(int k=j+1;k<no;k++)
            {
                add = arr[i] + arr[j] + arr[k];
                if(add==sum)
                {
                    flag = 1;
                    printf("%d %d %d ",arr[i],arr[j], arr[k]);
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }

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
    int sum = 0;
    printf("Enter The Sum\n");
    scanf("%d",&sum);
    TripletSum(arr,sum,no);
    return 0;
}
