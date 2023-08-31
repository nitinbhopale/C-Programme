#include<stdio.h>

int printDuplicate(int arr[], int no)
{
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}

int main()
{
    int no = 0;
    printf("Enter the size of Array\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate Elements are: ");
    printDuplicate(arr,no);
    return 0; 
}