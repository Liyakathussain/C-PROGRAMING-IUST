# include<stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("enter the value of mass \n");
    scanf("%f",&mass);
    printf("the value of force in Newton is %f\n",force(mass));
    
    return 0;
}
float force(float mass){
    float result;
    result = mass*9.8;
    return result;
}