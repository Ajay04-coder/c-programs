//print all even numbers from 1 to 100
#include<stdio.h>

int main (){
    int i=1;
    
    while(i<=100){
        if(i%2==0){
            printf("%d\n",i);
            
        }
        i+=1;

    }return 0;

}