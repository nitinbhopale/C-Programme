#include<stdio.h>

int NegativeCount(int brr[], int n)
{
    int cnt = 0;
    for(int j=0;j<n;j++)
    {
        if(brr[j]<0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int no = 0;
    printf("Enter the Number\n");
    scanf("%d",&no);
    printf("Enter the %d Numbers\n",no);
    int arr[no];
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    int iRet = NegativeCount(arr,no);

    printf("%d",iRet);
    return 0;
}