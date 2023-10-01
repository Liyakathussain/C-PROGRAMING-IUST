#include<stdio.h>
int main()
{
    int k;
    k=f(3);
    printf("%d",k);
}
int f (int n)
{
    int s;
    if (n==1)
    return 1;
    s=n+ f (n-1);
    return(s);
}