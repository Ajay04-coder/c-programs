#include<stdio.h>
int main (){
    //inputs
    float Battery_percentage,Motor_temperature;
    int Sensor_status;
    printf("Enter the battery percentage of robot : ");
    scanf("%f",&Battery_percentage);
    printf("Enter the motor temperature of robot in degree celcius : ");
    scanf("%f",&Motor_temperature);
    printf("Enter sensor status of robot : ");
    scanf("%d",&Sensor_status);
    //input taken 
    if (Battery_percentage<0 || Battery_percentage>100){
        printf("Invalid battery percentage");
    }
    else if (Battery_percentage<20){
        printf("Mission Aborted: Low Battery");
    }
    else if (Sensor_status!=0 && Sensor_status!=1) {
        printf("Invalid sensor status");
    }
    else if (Battery_percentage>=20 && Battery_percentage<=39){
        printf("Limited Mode: Short Mission Onlyy");
    }
    
    
    else if (Motor_temperature>80){
        printf("Mission Aborted: Motor Overheating");
    }
    
    else if (Battery_percentage>=40 && Motor_temperature<=80) {
        printf("Mission Ready");
    }
    
    else{
        printf("ready to work ");
    }
return 0;
}