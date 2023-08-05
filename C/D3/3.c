#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char ch;
    int size, num = 0;
    scanf("%[^\n]%n", a, &size);

    char to_print[100]; // Create a separate array to store characters to print
    int idx = 0; // Index for the to_print array

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            num = num * 10 + a[i] - '0'; // Update the count
            if (a[i + 1] < '0' || a[i + 1] > '9')
            {
                for (int k = 0; k < num; k++)
                {
                    printf("%s", to_print); // Print the characters num times
                }
                num = 0;
                idx = 0; // Reset the index for the to_print array
            }
        }
        else
        {
            to_print[idx++] = a[i]; // Store the character in the to_print array
            to_print[idx] = '\0'; // Null-terminate the to_print array
        }
    }
    return 0;
}
