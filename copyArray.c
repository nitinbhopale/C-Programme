#include<stdio.h>
int copy(int arr[], int no)
{
    int Brr[no];
    for(int j=0;j<no;j++)
    {
        
        Brr[j] = arr[j];
    }
    printf("The Element of Copied Array: ");
    for(int k=0;k<no;k++)
    {
        
        printf("%d ",Brr[k]);
    }
    return 0;
}

int main()
{
    int no = 0;
    printf("Enter the  Number\n");
    scanf("%d",&no);

    int arr[no];
    
    printf("Enter the %d numbers\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    copy(arr,no);
    return 0;
}