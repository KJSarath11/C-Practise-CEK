#include <stdio.h>
int main()
{
    int i, n, ar[10];
    printf("Enter the no of elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = n; i <= 0; i--)
    {
        printf("Reverse array is:%d", ar[i]);
    }
}