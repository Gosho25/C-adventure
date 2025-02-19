#include <stdio.h>

int main() {
    int num1;
    int num2;
    char op;
    int res;
    scanf_s("%d %d %c", &num1, &num2, &op);//scanf == unsafe ?????????????????
    if (op == '+')
    {
        res = num1 + num2;
    }
    else if (op == '-')
    {
        res = num1 - num2;
    }
    else if (op == '*')
    {
        res = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("DEVISON BY ZERO!\n");
        }
        else
        {
            res = num1 / num2;
        }
    }
    else
    {
        printf("INVALID OPERATION\n");
    }
    printf(" \n");
    printf("%d\n" , res);
    return 0;
}
