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
int Palindrome(char str[])
{
    int flag = 0;
    int j = length(str)-1;
    for(int i=0;i<length(str)/2;i++)
    {
        if(str[i]==str[j])
        {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
        j--;
    }
    return flag;
}
int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    if(Palindrome(str))
    {
        printf("String is Palindrome\n");
    } else {
        printf("String is not Palindrome\n");
    }
    return 0;
}