//      *
//    * * 
//  * * *         
//* * * *        

#include<stdio.h>
int main()
{   
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int temp = n-i;
        for(int k=temp;k>=1;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}