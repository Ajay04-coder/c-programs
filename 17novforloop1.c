#include<stdio.h>
int main(){
    int n;
    int i=1;
    int sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i;i<=n;i+=1){
       sum=sum+i;

    }
    printf("%d",sum);
    return 0;
}