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
int main()
{
    char str[25];
    printf("Enter the String\n");
    gets(str);
    
    int len = strLength(str);
    char str2[len];
    for(int i=0;i<=len;i++)
    {
        str2[i] = str[i];
    }
    printf("String 2 : %s",str2);
    return 0;
}