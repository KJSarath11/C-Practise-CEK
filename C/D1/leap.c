#include<stdio.h>
int main(){
    int a;//divisible by 400 and 4 and if not divisible by 100 then its leap year..
    printf("Enter the year:");
    scanf("%d",&a);
    if((a%100!=0 && a%4==0) || a%400==0)
        printf("Leap year");
    else
        printf("Not a leap year");    
    return 0; 
    }