//sum of 1 2 3 4 upto n
#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN = sumNm1+n;
    return sumN;
}
int main(){
    printf("%d",sum(5));
}