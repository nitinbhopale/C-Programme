#include<stdio.h>

int EvenOddArray(int arr[],int no)
{
    int EvenCnt = 0;
    int OddCnt = 0;
    for(int i=0;i<no;i++)
    {
        if(arr[i]%2==0)
        {
            EvenCnt++;
        } 
        else {
            OddCnt++;
        }
    }

    int Even[EvenCnt];
    int Odd[OddCnt];
    int m = 0;
    int n = 0;
    for(int i=0;i<no;i++)
    {
        if(arr[i]%2==0)
        {
            
            Even[m] = arr[i];
            m++;
        }
        else {
            Odd[n] = arr[i];
            n++;
        }
    }

    printf("Even Number Array:\n");
    for(int a=0;a<EvenCnt;a++)
    {
        printf("%d ",Even[a]);
    }
    printf("\n");
    printf("Odd Number Array:\n");
    for(int b=0;b<OddCnt;b++)
    {
        printf("%d ",Odd[b]);
    }
    return 0;
}
int main()
{
    int no =10;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    EvenOddArray(arr,no);
    return 0;
}