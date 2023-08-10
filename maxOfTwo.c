#include<stdio.h>

int maxOfTwo(int iNo1, int iNo2)
{
    int ret = 0;  
    if(iNo1 > iNo2)
    {
        ret = iNo1;
    } else 
    {
        ret = iNo2;
    }
    return ret;
}
int main()
{
    printf("%d",maxOfTwo(10,20));
    return 0;
}