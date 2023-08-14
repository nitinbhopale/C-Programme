//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *

#include<stdio.h>

int main()
{
    int no = 4;
    for(int i=1;i<=no;i++)
    {
        int temp = no-i;
        for(int j=1;j<=temp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int m = no-1;m>=1;m--)
    {
        for(int n = 1;n<=no-m;n++)
        {
            printf(" ");
        }
        for(int o = 1;o<=m;o++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}