#include<stdio.h>
float sq_area(float a);
int main (){
    float n,v;
    printf("Enter side of square: ");
    scanf("%f",&n);
    v=sq_area(n);
    printf("%f",v);
    return 0;
}
float sq_area(float a){
    float c;
    c=a*a;
    return c;

}
