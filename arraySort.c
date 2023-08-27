#include<stdio.h>

int sort(int arr[], int  no)
{
    int temp = 0;
    
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            temp = arr[i];
            if(arr[i]>arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int j=0;j<no;j++)
    {
        printf("%d => ",arr[j]);
    }
    return 0;
}
int main()
{
    int no = 5;
    printf("Enter the numbers\n");
    scanf("%d",&no);
    printf("Enter %d numbers\n",no);
    int arr[no];
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,no);
    return 0;
}