#include<stdio.h>
int main (){
    int n;
    printf("Enter your value: ");
    scanf("%d",&n);
    if (n % 2==0){
        printf("provided number is even:");
    }
    else{
        printf("entered value is odd:");
    }
    return 0;
}