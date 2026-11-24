#include<stdio.h>
void doubleValue(int*a);
int main (){
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    doubleValue(&a);
    
    return 0;

}
void doubleValue(int*a){
   *a=(*a)*2;
    printf("%d",*a);
}