#include<stdio.h>

int StringLength(char str[])
{
    int len = 0;
    int i =0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    char str[25];
    printf("Enter the String\n");
    scanf("%s",str);
    int iRet = StringLength(str);
    printf("String Length:%d",iRet);
    return 0;
}