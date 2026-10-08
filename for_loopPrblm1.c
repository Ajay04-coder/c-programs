//Problem

//A robot moves forward in 5 steps. In every step,
// it moves 10 cm.Write a C program using a for loop to 
//display the distance travelled after each step:


#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Step %d: %d cm\n", i, i * 10);
    }
return 0;
}
