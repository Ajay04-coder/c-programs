#include<stdio.h>
int main (){
    //considering u as unit 
    float u,bill;
    float tax=0.05;
    char a[20];
    printf("Enter your First Name: ");
    scanf("%s",&a);
    printf("enter unit consumed ");
    scanf("%f",&u);
    if (u<0){
        printf("Enter valid unit\n");
    }
    else if (u<=100){
        bill=u*3;
        printf("Name of consumer:%s\n ",a);
        printf("Your Electricity bill is: %f\n ",bill);
    }
    else if (u<=200){
        bill=(100*3+(u-100)*5);
        printf("Name of consumer:%s\n ",a);
        printf("Your Electricity bill is: %f\n",bill);
    }
    else if (u>200){
        bill=(100*3+100*5+(u-200)*7);
        printf("Name of consumer:%s\n ",a);
        printf("Your Electricity bill is: %f\n",bill);
    }
    else if (bill>1000){
        bill=bill+(bill*0.05);
        printf("Name of consumer:%s\n ",a);
        printf("Your Electricity bill is: %f\n",bill);
    }
    else {
        printf("none\n");
    }
printf("Note: If bill is above 1000 rs 5 percent tax is included in bill!");

    return 0;
}