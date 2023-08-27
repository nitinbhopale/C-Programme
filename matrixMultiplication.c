#include<stdio.h>

int matrixMultiplication(int row_one,int col_one,int row_two, int col_two,int arr[][col_one], int brr[][col_two])
{
    int crr[row_one][row_two];
    int k=1;
    for(int i=0;i<row_one;i++)
    {
        
        for(int j=0;j<row_two;j++)
        {
            
            crr[i][j] = arr[i][i] * brr[i][j] + arr[i][k]*brr[k][j];
            
        }
        k++;

    }
    
    for(int i=0;i<row_one;i++)
        {
            for(int j=0;j<row_two;j++)
            {
                printf("%d ",crr[i][j]);
            }
        }
        return 0;
}

int main()
{
    int row_one = 0;
    int col_one = 0;

    int row_two = 0;
    int col_two = 0;

    printf("Enter the Row of First array\n");
    scanf("%d",&row_one);
    printf("Enter the Column of First Array\n");
    scanf("%d",&col_one);

    int arr[row_one][col_one];


    printf("Note: Column of First array and Row of Second Array must be same...\n");
    printf("Enter the Row of Second Array\n");
    scanf("%d",&row_two);
    printf("Enter the Column of Second Array\n");
    scanf("%d",&col_two);

    int brr[row_two][col_two];


    if(col_one!=row_two)
    {
        printf("Multiplication is not Allowed...\n");
    } 
    else 
    {
        printf("Enter the %d numbers [Array One]\n",row_one*col_one);
        for(int i=0;i<row_one;i++)
        {
            for(int j=0;j<col_one;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Enter the %d numbers [Array Two]\n",row_two*col_two);
        for(int i=0;i<row_two;i++)
        {
            for(int j=0;j<col_two;j++)
            {
                scanf("%d",&brr[i][j]);
            }
        }
        matrixMultiplication(row_one,col_one,row_two,col_two,arr, brr);

    }   
    return 0;
}