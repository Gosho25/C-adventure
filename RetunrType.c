int multiplier(int num1, int num2)//moje i bez static
{
    int result = num1 * num2;
    printf("The sum of %d and %d is %d", num1, num2, result);
    return result;
}




int main() 
{
    printf("\n");
    int funcObject = multiplier(2, 2);//imame printf vuv funkciqta i e izlishen v main
    printf("\n");
    return 0;
}
