#include <stdio.h>

int main() {
    int num;
    scanf("%d ", &num);
    int sum;
    for(int i = 1;i <= num*2;i++)
    {
        sum += i;
    }
    printf("%d ", sum);
    return 0;
}
