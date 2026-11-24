#include<stdio.h>
void swap(int*a, int*b);
int main (){
    int a=10,b=20;
    swap(&a,&b);
    return 0;
}
void swap(int*a, int*b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d & b=%d",*a,*b);

}