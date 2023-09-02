/*
    input : array = [1,2,3,4,5] no = 2 
    output : arry = [3,4,5] 
*/
#include<stdio.h>

int LeftRotate(int arr[], int no, int rotate)
{
    int first_ele = 0;
    for(int i=0;i<rotate;i++)
    {
        first_ele = arr[0];
        for(int j=0;j<no-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[no-1] = first_ele;
    }
    for(int i=0;i<no;i++)
    {
        printf("%d=>",arr[i]);
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
    printf("Enter rotating number\n");
    scanf("%d",&rotate);

    LeftRotate(arr,no,rotate);
    return 0;
}