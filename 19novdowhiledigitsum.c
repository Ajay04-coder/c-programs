#include<stdio.h>
int main (){
    int i,digit;
    int sum=0;
    printf("enter your number: ");
    scanf("%d",&i);
    do{
        digit=i%10;
        sum=sum+digit;
       
        i=i/10;
    }while(i>0);
     printf("%d",sum);
    return 0;
}