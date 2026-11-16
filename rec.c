#include <stdio.h>
 
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int fibonachi(int n)
{
    if (n == 0 || n == 1) return n;
     
    return fibonachi(n - 1) + fibonachi(n - 2);
}

int fibonachi2(int n)
{
    int result = 0;
    int b = 1;
    int tmp;
 
    for (int i = 0; i < n; i++)
    {
        tmp = result;
        result = b;
        b += tmp;
    }
 
    return result;
}
  
int main(void)
{
    int factorial4 = factorial(4);  // 24
    int factorial5 = factorial(5);  // 120
    int factorial6 = factorial(6);  // 720
 
    printf("factorial of 4: %d \n", factorial4);
    printf("factorial of 5: %d \n", factorial5);
    printf("factorial of 6: %d \n", factorial6);

    int fib4 = fibonachi(4);
    int fib5 = fibonachi(5);    
    int fib6 = fibonachi(6);
 
    printf("4 Fibonachi number: %d \n", fib4);
    printf("5 Fibonachi number: %d \n", fib5);
    printf("6 Fibonachi number: %d \n", fib6);

    int fib7 = fibonachi2(7);

    printf("7 Fibonachi number: %d \n", fib7);
      
    return 0;
}