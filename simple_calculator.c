#include <stdio.h>

float operation(char op);

float num1,num2,result;
char op;

int main() {
    
    printf("Enter a Number: ");
    scanf("%f",&num1);
    printf("( +, -, *, / ): ");
    scanf("%s",&op);
    printf("Enter a Number: ");
    scanf("%f",&num2);
    operation(op);
    printf("%.2f",result);

    return 0;
}

float operation(char op) {

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            puts("error");
            result = 0;
        }
    } else {
        puts("invalid operator");
        result = 0;
    }

    return result;
}