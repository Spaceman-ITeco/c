#include <stdio.h>
 
int calculate(int x, int y, char operation)
{
    if(operation=='+')
    {
        return x + y;
    }
    else if(operation=='-')
    {
        return x - y;
    }
    else
    {
        return 0;
    }
}
 
int main(void)
{
    int x = 30;
    int y = 10;
    int result1 = calculate(x, y, '+');
    int result2 = calculate(x, y, '-');
    int result3 = calculate(x, y, 'g');
 
    printf("%d + %d = %d \n", x, y, result1);
    printf("%d - %d = %d \n", x, y, result2);
    printf("%d \n", result3);
}