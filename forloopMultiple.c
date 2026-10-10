#include<stdio.h>
int main (){
    int n,i,p;
    printf("Enter the value of number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i+=1){
        p=n*i;
        printf("%d\n",p);
    }
    return 0;
}