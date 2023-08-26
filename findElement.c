#include<stdio.h>

int FindElement(int arr[], int element, int no)
{
    int flag = 0;
    for(int i=0;i<no;i++)
    {
        if(element==arr[i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int no = 0;
    int element = 0;
    printf("Enter the number \n");
    scanf("%d",&no);
    printf("Enter %d Element:\n",no);
    int arr[no];
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Which Number You want to search\n");
    scanf("%d",&element);

    if(FindElement(arr,element,no))
    {
        printf("Element Found...\n");
    }
    else {
        printf("Element Not Found..\n");
    }
    return 0;
}