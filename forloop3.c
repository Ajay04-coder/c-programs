//. Battery monitoring 🔋
//A robot checks its battery 10 times. Start with battery level = 100% and decrease it by 5% after every check.
#include<stdio.h>
int main(){
    int i;
    for (i=100;i>=0;i-=5){
        printf("the percentage of battery is :%d\n",i);
    }
    return 0;

}