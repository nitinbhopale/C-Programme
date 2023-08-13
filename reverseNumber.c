#include<stdio.h>

int Reverse(int iNo)
{
    int Reverse = 0;
    int no = iNo;
    int cnt = 0;
    while(no!=0)
    {
        no = no/10;
        cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        Reverse = (Reverse * 10) + (iNo%10);
        iNo = iNo/10;
    }
    return Reverse;
}
int main()
{
    int value = 456;
    int Ret = Reverse(value);
    printf("Reverse:%d\n",Ret);
    return 0;
}