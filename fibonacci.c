#include<stdio.h>
int main(){
    int t1=0,t2=1;//first and second term
    int nexterm=t1+t2;
    int i,n;
    printf("Enter number of terms :");
    scanf("%d",&n);
    printf("fibonacci series is : %d %d",t1,t2);
    for(i=3;i<=n;i++){
        printf(" %d",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    return 0;
}