//Longest Common Prefix using Sorting
/*
    Input: {“geeksforgeeks”, “geeks”, “geek”, “geezer”}
    Output: “gee”

*/
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
int commonPrefix(char str1[], char str2[], char str3[0])
{
    int len = 0;
    if(length(str1)>length(str2) && length(str1) > length(str3))
    {
        len = length(str1);
    } else if(length(str2)>length(str1) && length(str2)>length(str3))
    {
        len = length(str2);
    }else {
        len = length(str3);
    }
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str2[i] && str2[i]==str3[i])
        {
            printf("%c",str1[i]);
        } else {
            break;
        }
    }
    return 0;
}
int  main()
{
    char str1[10];
    char str2[10];
    char str3[10];
    printf("Enter First String\n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);
    printf("Enter Third String\n");
    gets(str3);
    printf("The Common Prefix:\n");
    commonPrefix(str1,str2,str3);

    return 0;
}