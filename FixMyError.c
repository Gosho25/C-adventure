#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf_s("%d", &num);
    int sum = 0;
    for (int i = 1; i <= num*2; i++)
    {
        sum += i;
    }
    printf("%d ", &sum);
    return 0;
}
