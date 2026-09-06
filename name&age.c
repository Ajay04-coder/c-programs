#include<stdio.h>
int main(){
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("%s\n",name);
    printf("%d\n",age); 
    return 0;

}