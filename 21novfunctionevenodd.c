#include<stdio.h>
int check(int n);
int main(){
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    if(check(a)==1){
        printf("Even");
    }
    else {
        printf("Odd");
    }
    printf(check(a));
    return 0;

}
int check(int n){
    if(n%2==0){
        return 1;
        
    }
    else{
        return 0;
    }
    
}