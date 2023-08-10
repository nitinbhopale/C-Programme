#include <stdio.h>

int chkNo(int no)
{
    if(no%2==0)
    {
      printf("Number is Even");  
    } 
    else {
        printf("Number is Odd");
    }
    return 0;
}

int main()
{
    chkNo(5);
    return 0;
}