#include<stdio.h>
#include<math.h>

int main()
{
     int a,b,c;
    float x1,x2;
    printf("enter a,b,c");
    scanf("%d %d %d",&a, &b, &c);
    int d;
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("no real roots");
    }
    else if(d==0)
    {
        x1=(-b)/(2*a);
        printf("roots are %.2f & %.2f",x1,x1);
    }
    else{
          x1=(-b+sqrt(d))/(2*a);
         x2=(-b+sqrt(d))/(2*a);
          printf("roots are %.2f and %.2f",x2,x2);
        }

}