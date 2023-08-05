// subscrpit-index no.
// break-exits loop
// continue-continues skipping the particular one mentioned
#include <stdio.h> //smallest and second smallest
int main()
{
    int i, j, n, ar[10];
    int small, ssmall, flag = 0; // second element not yet recieved hence flag=0
    printf("Enter the no of elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ar[i]);
    }
    /*for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
             if(ar[i]>ar[j]){
                 temp=ar[i];
                 ar[i]=ar[j];
                 ar[j]=temp;
             }
         }
     }
     for(i=0;i<n;i++){
         printf("sorted array is:%d",ar[i]);
     }
     printf("First element is :%d,Second element is:%d",ar[0],ar[1]); */
    small = ar[0];
    if (ar[i] < small)
    {
        ssmall = small;
        small = ar[i];
    }
    else if (flag == 0)
    {
        ssmall = ar[i];
        flag = 1; // executes only once.once changed then it executes no more..
    }
    else if (ar[i] < ssmall)
    {
        ssmall = ar[i];
    }
    printf("Smallest element is:%d", small);
    printf("Second smallest is:%d", ssmall);
}