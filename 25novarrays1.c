//array for taking prices and return ing final amount with gst
#include<stdio.h>
int main (){
    float price[4];
    printf("Enter the prices :\n");
    scanf("%f\n",&price[0]);
    scanf("%f\n",&price[1]);
    scanf("%f\n",&price[2]);
    scanf("%f",&price[3]);
    printf("price 1=%f\nprice 2=%f\nprice 3=%f\nprice 4=%f\n "price[0]+(0.18*price[0]),
    price[1]+(0.18*price[1]),price[2]+(0.18*price[2]),price[3]+(0.18*price[3]));
    return 0;
    
}