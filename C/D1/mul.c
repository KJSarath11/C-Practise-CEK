#include<stdio.h>
int main(){
    int i,a,count=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=0;i<=10;i++){
        printf("%d * %d=%d\n",i,a,a*i);
    }
}