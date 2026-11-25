#include<stdio.h>
int main (){
    int x=10;
    int*ptr=&x;

    *ptr=*ptr+10;
    printf("%u\n",*ptr);
    x+=10;
    printf("%d",x);
    return 0;
}