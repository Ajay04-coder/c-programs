#include<stdio.h>
int fact(int n);
int main (){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;

}



int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i+=1){
        f=f*i;

    }
    return f;
}