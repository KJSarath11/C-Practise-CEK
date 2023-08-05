//Addition without using arithmetic operators
#include<stdio.h>
int main(){
    int i,a,b;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++){
        a++;
    }
    printf("%d",a);
}