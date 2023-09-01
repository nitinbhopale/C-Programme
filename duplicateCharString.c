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
void duplicateCharString(char str[])
{
    int flag = 0;
    
    for(int i=0;i<length(str);i++)
    {
        
        for(int j=i+1;j<length(str);j++)
        {
            if(str[i]==str[j])
            {
                flag = 1;
               
                break;
            } else {
                flag = 0;
               
            }
           
        }
         if(flag)
            {
                printf("%c",str[i]);
            }
    }
}
int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    duplicateCharString(str);
    return 0;
}