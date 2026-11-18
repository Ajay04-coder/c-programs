//digit i%==
//sum=sum+digit
#include<stdio.h>
int main(){
    int n,digit;
    int sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    while(n>0){
    digit=n%10;
    sum=sum + digit;
    n=n/10;
    }
    printf("%d",sum);
return 0;
}