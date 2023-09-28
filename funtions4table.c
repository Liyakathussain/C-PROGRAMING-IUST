//write table of a number n
#include<stdio.h>
void table(int m){
    for(int i=1;i<=10;i++){
        int product=m*i;
        printf("%d * %d = %d\n",m,i,product);
    }
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}