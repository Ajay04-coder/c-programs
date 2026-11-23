#include<stdio.h>
int main (){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int*ptr=&n;
    *ptr=*ptr+10;
    printf("%d",*ptr);
    return 0;
}