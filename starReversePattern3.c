// * * * *
//  * * *
//   * *
//    *

#include<stdio.h>

int main()
{
    int n = 4;
    for(int i=n;i>=1;i--)
    {
        int temp = n-i;
        for(int j = temp ; j>0; j--)
        {
            printf(" ");
        }
        for(int k = i ; k>0;k--)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }
    return 0;
}