#include<stdio.h>
int main (){
    int a=10;
    int*ptra=&a;
    *ptra=*ptra+5;
    printf("%d",*ptra);
    
    return 0;

}