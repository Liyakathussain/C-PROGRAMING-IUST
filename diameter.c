# include<stdio.h>

int main(){
    float diameter, length;
    printf("enter the value of diameter \t");
    scanf("%f",&diameter);
    printf("enter the value of length \t");
    scanf("%f",&length);
    float D;
    printf("enter the value of D \t");
    scanf("%f",&D);

    float reductiondiameter = (diameter-D)/2;
    printf("the reduction of diameter is %f\n",reductiondiameter);


    return 0;
}