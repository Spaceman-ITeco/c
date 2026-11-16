#include <stdio.h>
  
int main(void)
{
    int a = 5;
a += 10;        // 15
printf("a = %d \n", a);
a -= 3;         // 12
printf("a = %d \n", a);
a *= 2;         // 24
printf("a = %d \n", a);
a /= 6;         // 4
printf("a = %d \n", a);
a <<= 4;      // 64
printf("a = %d \n", a);
a >>= 2;      // 16
printf("a = %d \n", a);
}