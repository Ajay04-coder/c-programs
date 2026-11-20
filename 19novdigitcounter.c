#include<stdio.h>
int main (){
    int count=0;
    int i,c;
    printf("enter your number: ");
    scanf("%d",&i);
    do{
        c=i%10;
        count +=1;
        i=i/10;

    }while(i>0);
    printf("%d",count);
    return 0;

}