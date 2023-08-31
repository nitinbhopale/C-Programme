#include<stdio.h>

int length(char str[])
{
    int len = 0;
    int i = 0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
int concate(char str1[], char str2[])
{
    int cnt = length(str1)+length(str2);
    char string[cnt];

    for(int i=0;i<=length(str1);i++)
    {
        string[i] = str1[i];
    }
    int i=0;
    for(int j=length(str1);j<=cnt;j++)
    {
        string[j] = str2[i];
        i++;
    }
    printf("Concated String : %s",string);
    return 0;
}
int main()
{
    char str1[10];
    char str2[10];
    printf("Enter First String\n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);
    concate(str1,str2);
    return 0;
}