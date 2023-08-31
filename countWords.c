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
int countWords(char str[])
{
    int cnt = 0;
    if(str[0]==' ')
    {
        cnt--;
    }
    for(int i=0;i<length(str);i++)
    {
      
        if(str[i]==' ' && str[i+1]!=' ')
        {
            cnt++;
        }
    }
    return cnt+1;
}
int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);

    int iRet = countWords(str);
    printf("The Space Count : %d\n",iRet);
    return 0;
}