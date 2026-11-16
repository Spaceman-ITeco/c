int a = 10;
#include <stdio.h>
  
int main(void)
{
    int number1 = 10;
    double number2 = 4;
    double result = number1 + number2;   // 14.000000
    printf("result = %f \n", result);     // result = 14.000000
    int a = 10;
int b = 4;
int c = a / b;                     // 2
double d = a / b;               // 2.00000
double e = (double)a / (double)b;   // 2.50000
printf("c = %d \n", c);
printf("d = %f \n", d);
printf("e = %f \n", e);
int number = 70;
char symbol = (char) number;
printf("symbol = %c \n", symbol);           //  F
printf("symbol (int code) = %d \n", symbol);    // 70
int number3 = 300;
    char code = number3;    // потеря точности - число number1 усекается до 1 байта
    printf("code = %d \n", code);     // code = 44
    return 0;
 
    short number4 = 100000;    // потеря точности - число 100000 усекается до 2 байт
    printf("number4 = %d \n", number4);     // number2 = -31072
    return 0;
}