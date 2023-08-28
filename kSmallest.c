#include<stdio.h>

int kSmallest(int arr[],int no, int Kth)
{
    int temp = 0;
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    return arr[Kth-1];
}

int main()
{
    int no = 0;
    int Kth = 0;
    printf("Enter the Size of Array\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Numbers\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Kth Element Number\n");
    scanf("%d",&Kth);
    if(no<Kth)
    {
        printf("Array is Size Exceed\n");
    }  else {
        int iRet = kSmallest(arr,no,Kth);
        printf("The Smallest number is:%d\n",iRet);
    }
     

   
    return 0;
}