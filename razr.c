#include <stdio.h>

int main(void)
{

int a = 2 << 2;           // 10  на два разрядов влево = 1000 - 8
int b = 16 >> 3;          // 10000 на три разряда вправо = 10 - 2

printf("a = %d \n", a);
printf("b = %d \n", b);

a = 5 | 2;          // 101 | 010 = 111  - 7
b = 6 & 2;          // 110 & 010 = 10  - 2
int c = 5 ^ 2;          // 101 ^ 010 = 111 - 7
 
int f = 12;              // 00001100
int d = ~f;         // 11110011   или -13
     
printf("a = %d \n", a);
printf("b = %d \n", b);
printf("c = %d \n", c);
printf("d = %d \n", d);

int x = 12;
int y = ~x;
y += 1;
printf("y = %d \n", y);   // y=-12

int num = 255; // 0b11111111;
    int bit = 5;
    int result = num & (1 << bit);  // 0b00100000 или 32
    printf("result: %d\n", result); 
 
    return 0;
}