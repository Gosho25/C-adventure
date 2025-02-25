#include <stdio.h>


void returner()//succesful
{
    printf("Hello\n");
    printf("Methods\n");
}


static int multiplier(int num)
{
    return num;
    /*    
    int mult;
    printf("Write a multiplier: \n");
    scanf_s("%d ", &mult);
    int result = num * mult;
    */
}

int main() 
{
    returner();
    multiplier(2);
    return 0;
}
