#include<stdio.h>

int Sort(int arr[],int no)
{
    int temp = 0;
    for(int i=0;i<no;i++)
    {
        
        for(int j = i+1;j<no;j++)
        {
            temp = arr[i];
            if(arr[i] < arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k=0;k<no;k++)
    {
        printf("%d => ",arr[k]);
    }
    return 0;
}
int main()
{
    int no = 0;
    printf("enter the number\n");
    scanf("%d",&no);
    printf("Enter %d Numbers\n",no);
    int arr[no];

    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    Sort(arr,no);

}