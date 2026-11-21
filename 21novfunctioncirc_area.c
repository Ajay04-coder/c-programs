#include<stdio.h>
float circ(float r);
int main (){
    float R;
    printf("Enter radius of circle: ");
    scanf("%f",&R);
    printf("%f",circ(R));
    return 0;

}
float circ(float r){
    float area;
    area = 3.142* r*r;
    return area;
}