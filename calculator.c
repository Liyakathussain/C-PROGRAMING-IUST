//calculator
#include<stdio.h>
int main()
{
        char op;
        double num1,num2,result;
        printf("enter an op(+,_,*,/):");
        scanf("%c", &op);
        printf("enter one number:");
        scanf("%lf", & num1 );
        printf("enter second number:");
        scanf("%lf", & num2 );
        switch(op)
    {
        case '+':
        result=num1+num2;
        printf("result; %.2lf\n",result);
        break;
        case'-':
        result=num1-num2;
        printf("result:%.2lf\n",result);
        break;
        case'*':
        result=num1*num2;
        printf("result:%.2lf\n",result);
        break;
        case'/':
        result=num1/num2;
        printf("result:%.2lf\n",result);
        break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}