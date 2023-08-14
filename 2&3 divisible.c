#include<stdio.h>
int main()
{
    int x;
    printf ("enter a number");
    scanf ("%d",&x);
    if(x%3==0 && x%2==0)
    printf("the number is divisible by 2 and 3");
    else
    printf("the number is not divisible by 2 and 3");
    return 0;
}