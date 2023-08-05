#include<stdio.h>
void main()
{
    int a,b,c;
    float sum,avg;
    printf("Enter the 3 nos:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("sum=%0.2f and avg=%0.2f",sum,avg);
}