////printing alphabets in accordance with the given count
#include<stdio.h>
int main()
{
    char a[100];
    char ch;
    int size, num = 0;
    scanf("%[^\n]%n", a, &size);

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= 48 && a[i] <= 57)
        {
            num = num * 10 + a[i] - 48; /// num=1 //append then prints
            if (a[i + 1] < 48 || a[i + 1] > 57)
            {
                for (int k = 1; k <= num; k++)
                    printf("%c", ch);

                num = 0;
            }
        }
        else
        {
            ch = a[i]; /// ch=a
        }
    }
   
}