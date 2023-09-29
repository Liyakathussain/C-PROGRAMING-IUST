#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}