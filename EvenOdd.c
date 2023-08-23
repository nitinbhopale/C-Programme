#include<stdio.h>

void EvenOdd(int arr[],int n)
{
    int EvenCount = 0;
    int OddCount = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            EvenCount++;
        } else {
            OddCount++;
        }
    }
    printf("Even Count : %d\n",EvenCount);
    printf("Odd Count: %d\n",OddCount);
   
}
int main()
{
    int n =0;
    printf("Enter the number\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d Numbers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    EvenOdd(arr,n);
    return 0;
}