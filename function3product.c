//finf product of 2 nums using functions
#include<stdio.h>
int product(int x,int y);//funtion prototype
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Product is %d",product(a,b));
    return 0;
}
int product(int x,int y)
{
    return x*y;
}
