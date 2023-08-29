#include<stdio.h>

int chkArrayPalindrome(int arr[],int no)
{
    int flag = 0;
    int j = no-1;
    for(int i=0;i<no;i++)
    {
        if(arr[i]==arr[j])
        {
            flag = 1;
        }
        else {
            break;
        }
        j--;
    }
    return flag;
}

int main()
{
    int no=0;
    printf("Enter the Array Size\n");
    scanf("%d",&no);
    int arr[no];
    printf("Enter %d Elements\n",no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(chkArrayPalindrome(arr,no))
    {
        printf("Array is Palindrome");
    } else {
        printf("Array is not Palindrome");
    }
    return 0;
}