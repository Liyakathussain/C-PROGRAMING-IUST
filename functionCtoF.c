//Celsuis to farenheit calculator
//F=(C*(9/5))+32
#include<stdio.h>
float temp(int C);

int main(){
    int C;
    printf("Enter temp in C: ");
    scanf("%d",&C);
    printf("Temp is %f Farenheit",temp(C));
}
float temp(int C){
    float F;
    F=(C*(9.0/5.0))+32;
    return F;
}
