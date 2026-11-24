#include<stdio.h>
void add(int*add);
int main (){
    int a=100;
    printf("%p\n",&a);
    add(&a);
    return 0;

}
void add(int*add){
    printf("%p",&add);
}