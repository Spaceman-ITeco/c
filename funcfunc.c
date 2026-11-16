#include <stdio.h>
 
int sum(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
 
//  int choice - выбранный пункт
int (*select(int choice))(int, int)
{
    // возвращаем нужную функцию
    switch (choice)
    {
        case 2:
            return subtract;
        case 3:
            return multiply;
        default:
            return sum;
    }
}
int main(void)
{
    int (*operation)(int, int);    // указатель на выбранную функцию
    operation = select(1);  // получаем указатель на функцию sum - сложение
    int result = operation(6, 4); // выполняем функцию
    printf("result: %d \n", result); // result: 10
 
    return 0;
}