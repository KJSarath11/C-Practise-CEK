#include <stdio.h>
int main()
{
    int i, j, n;
    int temp;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {

            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
    }
}