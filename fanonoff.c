# include<stdio.h>

int main(){
    float temp, fan;
    printf("enter the temp in degree centigrade");
    scanf("%f",&temp);
    float normaltemp = 25;
    if  (temp >= 25)
    printf("switch on the fan");
    else 
    printf("the fan remains turned off");
    return 0;
}