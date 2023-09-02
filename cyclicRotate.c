#include<stdio.h>

int cyclicRotate(int arr[], int no)
{
    int first = arr[0];
    for(int i=0;i<no-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[no-1]=first;
    for(int j=0;j<no;j++)
    {
        printf("%d=>",arr[j]);
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
    cyclicRotate(arr,no);
    return 0;

}