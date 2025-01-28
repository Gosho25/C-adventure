#include <stdio.h>

int main() {
    char op; 
    float n1;
    float n2;  
    scanf("%c %f %f", &op, &n1, &n2);
    float res;
    if(op == '+')
    {
        res = n1 + n2;'
    }
    else if(op == '-')
    {
        res = n1 - n2;
    }
    else if(op == '*')
    {
        res = n1 * n2;
    }
    else if(op == '/')
    {
        res = n1 / n2;
    }

    printf("%f", res);
    return 0;
}
