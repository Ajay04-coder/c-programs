//Challenge: Robot Diagnostic System
//Imagine you're programming a robot that needs 
//to inspect 10 sensors one by one.
//Your task: Write a C program that checks sensors numbered 1 to 10 and follows these rules:
// 1. Print Checking Sensor X... for every sensor.
// 2. If the sensor number is divisible by 2, print Sensor X: EVEN - Normal Status.
// 3. If the sensor number is odd, print Sensor X: ODD - Normal Status.
// 4. If the sensor number is divisible by both 3 and 5, print Sensor X: SPECIAL SENSOR DETECTED! instead of the even/odd message.
// \. After checking all 10 sensors, print All Sensors
 #include<stdio.h>
int main (){
    int n,i;
    printf("ENTER YOUR VALUE: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1){
        printf("checking sensor %d\n",i);
        
        if (i%3==0 && i%5==0){
            printf("special sensor detected\n");
        }

        else if (i%2==0 ){
            printf("Even sensor state normal\n");
        }
        
        else {
            printf("odd sensor state normal\n");
        }
        
    }
printf("All sensors detected");
    


return 0;
}