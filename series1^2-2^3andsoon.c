#include<stdio.h>
int main()
{
    int n ;
    printf("Enter value of n ");
    scanf("%d",&n);
    for ( int i =1 ; i< n ; i++){
        if(i % 2 == 0){
            printf(" -%d^3 ",i);
        }
        else{
            printf(" +%d^2 ",i);
        }
    }
    return 0;
}