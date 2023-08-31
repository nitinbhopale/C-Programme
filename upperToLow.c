#include<stdio.h>

int Length(char str[])
{
    int len = 0;
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}

int upperToLow(char str[])
{
    for(int i=0;i<Length(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i] = str[i]+32;

        }
    }
    printf("%s",str);
    return 0;
}

int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    printf("The lowercase String\n");
    upperToLow(str);
    return 0;
}