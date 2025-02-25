#include <stdio.h>


void returner()//succesful
{
    printf("Hello\n");
    printf("Methods\n");
}


static int multiplier(int num)//unsure
{
    return num;
    /*    ignored lines?
    int mult;
    printf("Write a multiplier: \n");
    scanf_s("%d ", &mult);
    int result = num * mult;
    */
}

int main() 
{
    returner();//completed
    multiplier(2);//ERROR
    return 0;
}
