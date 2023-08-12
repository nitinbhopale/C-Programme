#include <stdio.h>

void fibonacci(int no)
{
    int no1 = 0;
    int no2 = 1;
    printf("%d %d ", no1,no2);
    for(int i=0;i<no-2;i++)
    {
        int no3 = no1+no2;
        printf("%d ", no3);
        no1 = no2;
        no2 = no3;
    }
}
int main()
{   
    int no = 10;
    fibonacci(no);
    return 0;
}