/*
    input : array = [1,2,3,4,5] no = 2 
    output : arry = [4,5,1,2,3] 
*/

#include<stdio.h>
int rightRotate(int arr[], int no, int rotate)
{
    int last_element = 0;

    for(int i=0;i<rotate;i++)
    {
        last_element = arr[no-1];
        for(int j=no-1;j>=0;j--)
        {
            
            arr[j] = arr[j-1];
        }
        arr[0] = last_element;
    }
    for(int i=0;i<no;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
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
    int rotate = 0;
    printf("Enter Rotating Number\n");
    scanf("%d",&rotate);

    rightRotate(arr,no,rotate);
    return 0;
}