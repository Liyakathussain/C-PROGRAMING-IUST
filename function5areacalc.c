//use functions to calculate are of Square, Rectangle, Circle
#include<stdio.h>
float areasquare(float side){
    return (side*side);
}
float arearect(float l,float b){
    return (l*b);
}
float areacircle(float r){
    return (3.14*r*r);
}

int main(){
    float side,l,b,r;
    char ch;
    printf("Area Calculator, Enter your figure\n");
    printf("Circle(c), Rectangle(r), Square(s): ");
    scanf("%c",&ch);

    if(ch=='c'){
        printf("Enter Radius: ");
        scanf("%f",&r);
        printf("Area of given circle with radius %f is %f",r,areacircle(r));
    }
    else if(ch=='r'){
        printf("Enter Sides: ");
        scanf("%f %f",&l,&b);
        printf("Area of given rectangle with sides %f and %f is %f",l,b,arearect(l,b));
    }
    else if(ch=='s'){
        printf("Enter side: ");
        scanf("%f",&side);
        printf("Area of given square with side %f is %f",side,areasquare(side));
    }
    else{
        printf("Invalid figure");
    }

    return 0;
}