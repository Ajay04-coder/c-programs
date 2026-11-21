#include<stdio.h>
float great_num(float a, float b, float c);
int main (){
    float l,k,m;
    printf("Enter 1st Number: ");
    scanf("%f",&l);
    printf("Enter 2nd Number: ");
    scanf("%f",&k);
    printf("Enter 3rd Number: ");
    scanf("%f",&m);
    if(l<0 || k<0 || m<0){
        printf("put positive values");
        return 0;
    }
    printf("%f",great_num(l,k,m));
    return 0;
}
float great_num(float a, float b, float c){
    if(a>=b && a>=c){
        printf("1st number is greater");
        return a;
    }
    else if(b>=a && b>=c){
        printf("2nd number is greater");
        return b;
    }
    else{
        printf("3rd number is greater");
        return c;
    }
   
}