#include<stdio.h>

int NoDuplicate(int arr[],int no)
{
    int Dup = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                Dup++;
            }
        }
    }
    return Dup;
}
int main()
{
    int no=0;
    printf("Enter the Size of Array\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    int iRet = NoDuplicate(arr,no);
    printf("Total Number of Duplicate:%d\n",iRet);
}