#include<stdio.h>

int chkNoPrime(int no)
{
    if(no<0)
    {
        printf("Enter the Positive Number");
    } 
    else {
        if(no==1 || no==2 || no==3)
        {
            printf("It is Prime Number");
        } else if (no%2!=0)
        {
            int flag = 0;
            for(int i=3;i<no;i++)
            {
                if(no%i==0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("It is Not prime Number");
            } else {
                printf("It is prime Number");
            }
        } else {
            printf("It is not prime nubmer");
        }
    }
    return 0; 
}


int main()
{
    chkNoPrime(32);
    return 0;
}