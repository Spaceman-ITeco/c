#include <stdio.h>

char* str1 = "Hello";
char* str2 = "World";
  
int main(void)
{
    char *hello = "Hello METANIT.COM! \n"; // указатель на char - фактически строка
    printf("%s", hello);
    printf("str1 = %p \n", &str1[0]);
    printf("str2 = %p \n", &str2[0]);
    char* str1 = "Hello World";
    char (*str2)[] = &"Hello World";
    printf("str1 = %p \n", &str1[0]);
    printf("str2 = %p \n", str2);
    char text1[] = "Hello";
    text1[1] = 'a';
    *text1 = 'B';
    *(text1+2) = 'b';
    printf("%s\n", text1); // Bablo
    return 0;
}