#include<stdio.h>
int main(){
    int a=0,b=1,n,nt,i;
    printf("Enter the number:");
    scanf("%d",&n);
    //printing first and second term
    printf("%d%d",a,b);
    //printing rest of the terms
    for(i=2;i<n;i++){
        nt=a+b;
        a=b;
        b=nt;
        printf("%d",nt);
    }
    return 0;
}