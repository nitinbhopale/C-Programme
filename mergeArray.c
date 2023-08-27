#include<stdio.h>

int main()
{
    int no = 0;
    int no2 =0;
    int no3 = 0;
    printf("Enter the First Array Size \n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter the %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Second Array Size \n");
    scanf("%d",&no2);
    int brr[no2];
    printf("Enter the %d Elements\n",no2);
    for(int j=0;j<no;j++)
    {
        scanf("%d",&brr[j]);
    }

    no3 = no+no2;

    int crr[no3];
    for(int k=0;k<no;k++)
    {
        crr[k] = arr[k];
    }
    int temp=0;
    for(int l=no;l<no3;l++)
    {
        
        crr[l] = brr[temp];
        temp++;
    }
    printf("The Merged Array : ");
    for(int a=0;a<no3;a++)
    {
        printf("%d  ",crr[a]);
    }
    return 0;
}