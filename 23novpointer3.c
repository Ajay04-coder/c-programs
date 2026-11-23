#include<stdio.h>
int main (){
    int num=50;
    int *ptr=&num;
    printf("%p\n",ptr);
    printf("%d",*ptr);
    return 0;
}