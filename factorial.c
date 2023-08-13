#include<stdio.h>

int Factorial(int no)
{
    int fact = 1;
    for(int i=1;i<=no;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int no = 4;
    int iRet = Factorial(no);
    printf("%d\n",iRet);
    return 0;
}