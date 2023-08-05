#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i<=5; i++)//row no. indicated here.//change i to 1 for printing number series
    {
        for (j = 0; j <= i; j++)//col no. indicated here.
        {
          // printf("%c",'a'+j); 
          printf("%d", j);
          //printf("*");//for printing symbol '*'.
        }
        printf("\n");
    }
}