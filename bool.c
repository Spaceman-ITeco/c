#include <stdio.h>
  
int main(void)
{
    int a = 10;
    int b = 4;
    int c = a == b;                 // 0 - числа НЕ равны
    printf("c = %d \n", c);         // c = 0
 
    int num = 5;
    int result = num == 2 + 3;      // 1 - числа равны
    printf("result = %d \n", result);     // result = 1
    return 0;
}