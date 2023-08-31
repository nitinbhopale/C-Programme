#include<stdio.h>

int length(char str[])
{
    int len=0;
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}

void VowelConsonant(char str[])
{
    int vowel = 0;
    int consonant = 0;
    for(int i=0;i<length(str);i++)
    {
        if(str[i]=='a' || str[i]=='i' || str[i]=='e' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        } else {
            consonant++;
        }
    }
    printf("Vowel:%d\n",vowel);
    printf("Consonant:%d\n",consonant);
}
int main()
{
    char str[30];
    printf("Enter the String\n");
    gets(str);
    VowelConsonant(str);
    return 0;
}