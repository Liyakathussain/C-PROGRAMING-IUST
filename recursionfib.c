#include<stdio.h>
void fib(int n);
int main(){
    int n;
    
    printf("Enter n: ");
    scanf("%d",&n);
    printf("fibonacci series is: %d %d ",0,1);
    fib(n-2);
    return 0;
}
void fib(int n){
    static int t1=0,t2=1;
    int t3;
    if(n>0){
    t3=t1+t2;
    printf("%d ",t3);
    t1=t2;
    t2=t3;
    fib(n-1);
    }
}
