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

int CharDigLet(char str[])
{
    int CharCnt = 0;
    int DigCnt = 0;
    int LetCnt = 0;
    for(int i=0;i<length(str);i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            LetCnt++;
        }else if(str[i]>=97 && str[i]<=122)
        {
            LetCnt++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            DigCnt++;
        } else {
            CharCnt++;
        }
    }
    printf("The Letters=> %d\n",LetCnt);
    printf("The Digit=> %d\n",DigCnt);
    printf("The Special Character=> %d\n",CharCnt);
    
    return 0;
}

int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    CharDigLet(str);
    return 0;
}