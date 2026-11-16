#include <stdio.h>
 
void sum(int x, int y)
{
    printf("%d + %d = %d \n", x, y,  x + y);
}
 
int main(void)
{
    sum(1, 2);
    sum(4, 5);
    sum(6, 2);
}