//add 2 nums using functions
#include<stdio.h>
int sum(int x, int y);

int main(){
    int a,b;
    printf("Enter first num: ");
    scanf("%d",&a);
    printf("Enter second num: ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("Sum is %d",s);

}
int sum(int x, int y){
    return x+y;
}
