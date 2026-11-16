#include <stdio.h>
  
typedef int (binary_op)(int, int);
 
int sum(int x, int y) { return x + y;}
int subtract(int x, int y) { return x - y;}
int multiply(int x, int y) { return x * y;}
 
int main(void)
{
    binary_op* operations[] = {&sum, &subtract, &multiply};   // массив функций binary_op
    printf("result = %d \n", operations[0](10,5));       // result=15 
    printf("result = %d \n", operations[1](10,5));       // result=5 
    printf("result = %d \n", operations[2](10,5));       // result=50 
      
    return 0;
}