/* Input: arr[] = {20, 10, 8, 6, 4, 2}
Output: arr[] = {20, 8, 10, 4, 6, 2} */

#include <stdio.h>

int waveArray(int arr[], int no)
{
    int temp = 0;
    for (int i = 0; i < no; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (i % 2 != 0)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < no; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
int main()
{
    int no = 0;
    printf("Enter the Array Size\n");
    scanf("%d", &no);
    int arr[no];
    printf("Enter %d Elements\n", no);
    for (int i = 0; i < no; i++)
    {
        scanf("%d", &arr[i]);
    }
    waveArray(arr, no);
    return 0;
}