#include<stdio.h>
int prime(int a);
int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    prime(n);

    return 0;
}
int prime (int a){
    int i;
    if (a<=1){
        return 0;
    }
    for (i=1;i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }

}