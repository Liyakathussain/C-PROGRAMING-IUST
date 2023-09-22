//enter a even number to win the game
#include<stdio.h>
int main()
{
    int x,i;
    for(i=1;i<=3;i++)
    {
        printf("enter an even number");
        scanf("%d",&x);
        if(x%2==0)
        break;
    }
    if(i==4)
    printf("game over");
    else
    printf("you win");
    return 0;
}