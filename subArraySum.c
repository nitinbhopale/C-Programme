// input = [1,2,3,4,5,6]
// sum = 9
// output: 1 4

#include<stdio.h>

int subArraySum(int arr[],int no,int sum)
{
    int pos1 =0;
    int pos2 =0;
    int tot =0;
    for(int i=0;i<no;i++)
    {
        tot = 0;
        for(int j=i;j<no;j++)
        {
            tot = tot+arr[j];
            if(tot==sum)
            {
                pos1 = i+1;
                pos2 = j+1;
                break;
            } 
        }
    }

    printf("The Starting Position:%d\n",pos1);
    printf("The Ending Position:%d\n",pos2);
    return 0;
}
int main()
{
    int no=0;
    int sum = 0;
    printf("Enter the Array size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter the %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Sum\n");
    scanf("%d",&sum);

    subArraySum(arr,no,sum);
    return 0;
}