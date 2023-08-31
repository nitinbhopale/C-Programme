#include<stdio.h>

int length(char str[])
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

int compare(char str1[], char str2[])
{
    int flag = 0;
    if(length(str1)!=length(str2))
    {
        flag = 0;
    } else {
        for(int i=0;i<=length(str2);i++)
        {
            if(str1[i]==str2[i])
            {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    char str1[10];
    char str2[10];
    printf("Enter First String\n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);

    if(compare(str1,str2))
    {
        printf("String Are Same\n");
    } else {
        printf("String are not same\n");
    }
    return 0;
}