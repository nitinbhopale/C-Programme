#include<stdio.h>

int chkPrime(int No)
{
    int flag = 0;
    if(No%2!=0)
    {
        for(int i=3;i<No;i++)
        {
            if(No%i==0)
            {
                flag = 0;
                break;
            }
            else {
                flag = 1;
            }
        }
    }
    return flag;
}
int main()
{
    int cnt = 2;
    int no = 120;
    printf("%d %d ",2,3);
    for(int i=4;i>0;i++)
    {
        if(cnt==no)
        {
            break;
        }
        if(chkPrime(i))
        {
            printf("%d ",i);
            cnt++;
        }
    }
    return 0;
}