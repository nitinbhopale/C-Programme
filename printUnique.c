#include<stdio.h>

int printUnique(int arr[],int no)
{
    
    for(int i=0;i<no;i++)
    {
        int cnt=0;
        for(int j=0;j<no;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        
        if(cnt==1)
        {
            
            printf("%d ",arr[i]);
        }
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
    printf("The Unique Element:\n");
    printUnique(arr,no);
    return 0;
}