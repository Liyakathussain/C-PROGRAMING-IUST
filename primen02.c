# include<stdio.h>

int main(){
    int n ,prime;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
      break;
        }
    }
    if(n==0){
        printf("The no is not  prime no");

    }
    else{
        printf("The  no is  a prime no");
    }
    return 0;
}