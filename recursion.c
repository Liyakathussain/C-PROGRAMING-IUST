#include<stdio.h>
void printhw(int count){
    if(count==0){
        return; 
    }
    printf("Hello world\n");
    printhw(count-1);
}
int main(){
    printhw(5);
    return 0;
}