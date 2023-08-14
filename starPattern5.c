//      *          
//     * *         
//    *   *        
//   *     *
//  * * * * *

#include<stdio.h>

int main()
{
    int no = 5;
    for(int i = 1 ; i<=no ; i++)
    {
        int temp = no - i;
        for(int j=1;j<=temp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        
    }
}