#include "functions.h"

int calculate(int num1, int num2, char op) {
    int result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            result = 0;
            break;
    }

    return result;
}
