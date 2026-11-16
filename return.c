#include <stdio.h>
 
int sum(int x, int y)
{
    return x + y;
}
 
int main(void)
{
    int x = 25;
    int y = 15;
    int result = sum(x, y);
    printf("%d + %d = %d \n", x, y, result);
}