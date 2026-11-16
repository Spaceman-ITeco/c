#include <stdio.h>
  
typedef int (binary_op)(int, int);  // определяем тип binary_op
 
int sum(int x, int y) { return x + y;}
int subtract(int x, int y) { return x - y;}

typedef int (binary_op)(int, int);
 
binary_op sum;  // прототип функции sum
 
int main(void)
{
    int a = 10;
    int b = 5;
    int result;
    binary_op *op1 =&sum; 
    binary_op *op2 =&subtract;
 
    result = op1(a, b);
    printf("result = %d \n", result);       // result=15 
 
    result = op2(a, b);
    printf("result = %d \n", result);       // result=5

    binary_op* op3 = &sum; 
    printf("result = %d \n", op3(10,5));       // result=15 
      
    return 0;
}