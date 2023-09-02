// Reverse Words in String 
// hello i am nitin
// output: nitin am i hello

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
int wordCount(char str[])
{
    int cnt = 0;
    for(int i=0;i<length(str);i++)
    {
        if(str[i]==' ')
        {
            cnt++;
        }
    }
    return cnt+1;
}
int reverseWord(char str[])
{
    return 0;
}
int main()
{
    char str[50];
    printf("Enter the String\n");
    gets(str);
    
    return 0;
}