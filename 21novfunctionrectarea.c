#include<stdio.h>
float area(float a , float b);
int main (){
    float w,l;
    printf("Enter the length: \n");
    scanf("%f",&l);
    printf("Enter the width: \n");
    scanf("%f",&w);
    printf("%f",area(w,l));
    return 0;
}
float area (float a, float b){
    float c;
    c=a*b;
    return c;

}