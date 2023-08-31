#include<stdio.h>

int StringLength(char str[])
{
    int len = 0;
    int i =0;
    int spc = 0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            spc++;
        }
        len++;
        i++;
    }
    return len-spc;
}

int main()
{
    char str[25];
    printf("Enter the String\n");
    
    gets(str);
    int iRet = StringLength(str);
    printf("String Length:%d",iRet);
    return 0;
}