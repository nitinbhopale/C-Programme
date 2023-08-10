#include<stdio.h>

int swap(int iNo1,int iNo2)
{
    int temp = iNo1;
    int a = iNo2;
    int b = temp;
    printf("%d %d",a,b);
    return 0;
}
int main()
{
    swap(10,20);
    return 0;
}