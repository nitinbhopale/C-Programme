#include<stdio.h>

int Palindrome(int no)
{
    int flag = 0;
    int temp = 0;
    int cnt = 0;
    int tempNo = no;
    int No2 = no;
    while(tempNo!=0)
    {
        tempNo =  tempNo/10;
        cnt++;
    }
    for(int i=0;i<cnt;i++)
    {
        temp = temp * 10 + (no%10);
        no = no/10;
    }
    if(No2==temp)
    {
        flag = 1;
    }
    return flag;
}
int main()
{
    int no = 12321;
    if(Palindrome(no))
    {
        printf("Number is Palindrome");
    } else{
        printf("Number is not Palindrome");
    }
    return 0;
}