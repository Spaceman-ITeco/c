#include <stdio.h>
 
int main(void)
{
    const int number = 2;
    printf("number = %d \n", number);
    // number = 55;  эта строка работать не будет, так как number - это константа
    return 0;
}