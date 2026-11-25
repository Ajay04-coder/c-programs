#include<stdio.h>
int main (){
    int age=10,age2=20,diff;
    int*ptr1=&age;
    int*ptr2=&age2;
    diff=*ptr1-*ptr2;
    printf("%d",diff);
    
    return 0;


}