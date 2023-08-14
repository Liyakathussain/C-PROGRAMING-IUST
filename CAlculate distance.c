// speed of a car
#include<stdio.h>
int main()
{
float speed, distance,time;
printf("enter the speed of a car");
scanf("%f",&speed);
printf("enter the value of time");
scanf("%f",&time);
distance=speed*time;
printf("the distance is %f",distance);
return 1;
}