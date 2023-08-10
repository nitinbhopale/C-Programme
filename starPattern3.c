//___*___
//__*_*__
//_*_*_*_
//*_*_*_*_*

#include<stdio.h>
int main()
{
    int n = 4;
    for(int i=1;i<=n;i++)
    {
        int temp = n-i;
        for(int j=temp;j>=1;j--)
        {
            printf(" ");
        }
        for(int m=1;m<=i;m++)
        {
            printf("* ");
        }
        for(int k=temp;k>=1;k--)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}