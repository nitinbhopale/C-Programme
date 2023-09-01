#include<stdio.h>

int length(char str[])
{
    int len = 0;
    int i =0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
void occuranceChar(char str[])
{
    int occ = 0;
    for(int i=0;i<length(str);i++)
    {
        occ = 1;
        for(int j=i+1;j<length(str);j++)
        {
            
            if(occ==1)
            {
                if(str[i]==str[j])
                {
                    occ++;
                    printf("%c = %d",str[i],occ);
                }   
            }
           
        }
        if(occ==1)
        {
            printf("%c = %d",str[i],occ);
        }
        
    }
}
int main()
{
    char str[20];
    printf("Enter the String\n");
    gets(str);
    occuranceChar(str);
    return 0;
}