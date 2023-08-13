#include<stdio.h>

int GCD(int iNo1, int iNo2)
{
    int gcd = 0;
    int grt = iNo2;
    int otherNo = iNo1;
    if(iNo1>iNo2)
    {
        grt = iNo1;
        otherNo = iNo2;
    }
    // Here is main logic to check gcd 
    if(grt%otherNo==0)
    {
        gcd = otherNo;
    } else {
        for(int i=1;i<otherNo;i++)
        {
            if(grt%i==0 && otherNo%i==0)
            {
                gcd = i;
            }
        }
    }
    return gcd;
}
int main()
{
    int value1 = 512;
    int value2 = 256;
    int iRet = GCD(value1,value2);
    printf("%d\n",iRet);
    return 0;
}