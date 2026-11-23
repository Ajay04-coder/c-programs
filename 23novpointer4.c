#include<stdio.h>
int main (){
    int a= 10 ;
    int *ptr=&a;
    *ptr=100;
    printf("%d\n",*ptr);
    return 0;



}