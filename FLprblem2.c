//🤖 Problem
//A robot has 4 wheels. You want to check each wheel one by one.
#include<stdio.h>
int main (){
    int i;
    for(i=1;i<=4;i+=1){
        printf("checking tyre No.:%d\n",i);
    }
printf("All tyres are good");
return 0;
}