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
    else
    {
        printf("Other operaion");
    }
    printf(" \n");
    printf("%d\n" , res);
    return 0;
}
