#include<stdio.h>

int MatrixAddition( int row, int col,int arr[][col], int brr[][col])
{
    int crr[row][col];
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j]; 
        }
    }
    printf("Addition of Two Matrix is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",crr[i][j]); 
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int row = 0;
    int col = 0;
    printf("Enter the Number of Rows\n");
    scanf("%d",&row);
    printf("Enter the Number of Columns\n");
    scanf("%d",&col);

    int arr[row][col];
    int brr[row][col];

    printf("Enter %d Elements\n",row*col);
    for(int i=0;i<row;i++)
    {
        
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("Enter %d Elements\n",row*col);
    for(int i=0;i<row;i++)
    {
        
        for(int j=0;j<col;j++)
        {
            scanf("%d",&brr[i][j]);
        }

    }
    
    MatrixAddition(row,col,arr,brr);
    return 0;
}