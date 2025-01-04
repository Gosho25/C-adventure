#include <stdio.h>

int main() {
    float num1; 
    float num2;
    char operation;
    float result;
    while(1)
    {
        scanf("%c %f %f", &operation, &num1, &num2);
        if(operation == 'e')
        {
            break;
        }
        else if(operation == '+')
        {
            result = num1 + num2;
        }
        else if(operation == '-')
        {
            result = num1 - num2;
        }        
        else if(operation == '*')
        {
            result = num1 * num2;
        }
        else if(operation == '/')
        {
            result = num1 / num2;
        }
    }
    printf("%.6f\n", result);
    return 0;
};
