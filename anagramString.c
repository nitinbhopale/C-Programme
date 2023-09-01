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

int chkAnagram(char str1[], char str2[])
{
    int flag = 0;
    if(length(str1)!=length(str2))
    {
        flag = 0;
    } else {
        for(int i=0;i<length(str1);i++)
        {
            for(int j=0;j<length(str2);j++)
            {
                if(str1[i]==str2[j])
                {
                    flag = 1;
                    break;
                } else {
                    flag = 0;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
    }
    return flag;
}

int main()
{
    char str1[30];
    char str2[30];
    printf("Enter First String \n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);
    if(chkAnagram(str1,str2))
    {
        printf("Strings are anagram\n");
    } else {
        printf("Strings are not anagram\n");
    }
    return 0;
}