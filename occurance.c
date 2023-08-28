#include<stdio.h>

int Occurance(int arr[],int no)
{
    
    for(int i=0;i<no;i++)
    {
        int cnt = 0;
        for(int j=0;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        printf("The Occurance of %d is %d \n",arr[i],cnt);
    }
    return 0;
}

int main()
{
    int no = 0;
    printf("Enter the Numbers\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d numbers\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    Occurance(arr,no);
    return 0;
}