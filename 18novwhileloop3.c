//multiplication table
#include<stdio.h>
int main (){
    int i=1;
    int n;
    int p;
    printf("enter your number : ");
    scanf("%d",&n);
    while(i<=10){
        p=n*i;
        printf("%d\n",p);
        i+=1;
    }return 0;

}