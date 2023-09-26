#include<stdio.h>

void greeting();

int main(){
    greeting();
    return 0;
}

void greeting(){
    char country;
    printf("Are you indian(i) or french(f)");
    scanf("%c",&country);
    if(country=='i'){
        printf("Namaste");
    }
    else if(country=='f') {
        printf("Bonjour");
    }
    else{
        printf("Invalid");
    }
}