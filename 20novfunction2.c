#include<stdio.h>
int sum(int a, int b);
int main (){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    sum( a ,b);
    printf("%d",sum( a ,b));
    return 0;

}
int sum(int a, int b){
    return a+b ;
}