#include<stdio.h>
int fact(int n);//function prototype
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));//function call
    return 0;
}
//function define
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}
