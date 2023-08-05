#include<stdio.h>
int main(){
    char a[10];
    int size;
    scanf("%[^\n]%n",a,&size);
    
    for(int i=0;i<size;i++)
    printf("%c",a[i]);
}