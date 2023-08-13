#include<stdio.h>
int chkPerfect(int no)
{
    int sum = 0;
    for(int i=1;i<=no/2;i++)
    {
        if(no%i==0)
        {
            sum = sum + i;
        }
    }
    int flag = 0;
    if(sum == no )
    {
        flag = 1;
    }
    return flag;
}

int main()
{
    int value = 28;
    if(chkPerfect(value))
    {
        printf("Perfect Number");
    } else {
        printf("Not Perfect Number");
    }
    return 0;
}