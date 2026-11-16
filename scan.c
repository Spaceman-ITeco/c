#include <stdio.h>

int main(void)
{
    int age;
    printf("Input your age:");
    scanf("%d", &age);
     
    printf("age = %d", age);
    double price;
    long code;
    printf("Enter the product code: ");
    scanf("%ld", &code);
    printf("Enter the price: ");
    scanf("%lf", &price);
    printf("Product code: %ld \t price: %.2lf \n", code, price);
   int count;
     printf("Enter product data: ");
    scanf("%ld %d %lf", &code, &count, &price);
    printf("Product code: %ld \tcount: %d \tprice: %.2lf\n", code, count, price);
    char name[10];
    // вводим имя
    printf("Enter your name: ");
    scanf("%10s", name);
     
    printf("Name: %s \n",name);
    printf("Enter your name: ");
    scanf("%10[^\n]", name);
     
    printf("Name: %s \n",name);
    return 0;
}