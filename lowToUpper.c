#include<stdio.h>

int strLength(char str[])
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
int lowToUpper(char str[])
{
    for(int i=0;i<strLength(str);i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i] = str[i]-32;
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
    printf("The Capital String\n");
    lowToUpper(str);
    
    return 0;
}