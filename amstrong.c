// 153 the cube of 1,5,3 are 125+27+1=153

#include<stdio.h>
int chkAmstrong(int No)
{
    int ams = 0;
    int temp = No;
    while(No!=0)
    {
        ams = ams + ((No%10)*(No%10)*(No%10));
        No = No/10;
    }
    int flag = 0;
    if(temp==ams)
    {
        flag = 1;
    }
    return flag;
}

int main()
{
    int value = 371;
    if(chkAmstrong(value))
    {
        printf("It is Amstrong\n");
    } else {
        printf("Not Amstrong");
    }
    return 0;
}