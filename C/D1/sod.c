#include<stdio.h>//pre-processor directive
int main(){
    int n,m,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        sum+=m;
        n=n/10;
    }
    printf("Enter the sum:%d",sum);
    return 0;
}