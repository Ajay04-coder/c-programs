#include<stdio.h>
void rotate(int*a,int*b,int*c);
int main (){
    int a=1,b=2,c=3;
    rotate(&a,&b,&c);
    return 0;
}
void rotate(int*a,int*b,int*c){
    int t=*a;
    *a=*b;
    *b=*c;
    *c=t;
    printf("a=%d , b=%d ,c=%d",*a,*b,*c);
}