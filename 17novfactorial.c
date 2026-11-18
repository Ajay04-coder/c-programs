#include<stdio.h>
int main (){
    int n,i;
    int f=1;
    printf("enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1){
        f=f*i;
        
    }
    printf("%d",f);

    return 0;


}