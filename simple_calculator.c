#include <stdio.h>
#include <math.h>

float operation(char op);

float num1,num2,result;
char op;

int main() 
{
    printf("Enter a Number  : ");
    scanf("%f",&num1);
    printf("(+,-,*,/,%%,#,^) : ");
    scanf("%s",&op);
    
    if (op != '#') 
    {
        printf("Enter a Number  : ");
        scanf("%f",&num2);
    }
    
    operation(op);
    printf("%.2f",result);
    
    return 0;
}

float operation(char op) 
{
    switch(op) 
    {
        case '+':
            result =  num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } 
            else {
                puts("error");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
            } else {
                puts("error");
            }
            break;
        case '#':
            if (num1 >= 0) {
                result = sqrt(num1);
            } else {
                puts("negative numbers");
            }
            break;
        case '^':
            result = pow(num1,num2);
            break;
        default:
            puts("invalid operator");
    }

    return result;
}