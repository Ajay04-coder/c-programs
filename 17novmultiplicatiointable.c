#include<stdio.h>
int main (){
    int n,p;
    int i =1;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i;i<=10;i+=1){
        p=n*i;
        printf("%d\n",p);
    }
    return 0;


}