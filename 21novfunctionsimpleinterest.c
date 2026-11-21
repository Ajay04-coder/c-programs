#include<stdio.h>
float SI(float P ,float R,float T);
int main (){
    float P,R,T;
    printf("Enter principal: ");
    scanf("%f",&P);
    printf("Enter interest rate: ");
    scanf("%f",&R);
    printf("Enter time period: ");
    scanf("%f",&T);
    printf("%f",SI(P,R,T));
    return 0;
}
float SI(float P ,float R,float T){
    float si;
    si=(P*R*T)/100;
    return si;
}