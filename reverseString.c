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

void reverseString(char str[])
{
    int len = length(str);
    int j=len-1;
    char temp;
    for(int i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    printf("The Reverse String:%s\n",str);
}

int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    reverseString(str);
}