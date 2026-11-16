#include <stdio.h>
 
int main(void)
{
    int x = 10;
    int *p;
    p = &x;
    printf("%p \n", p);     // 0060FEA8
    printf("Address = %p \n", (void*) p);
    printf("x = %d \n", *p);
    int y = *p;     // присваиваем переменной y значение по адресу из указателя p
    printf("y = %d \n", y); // 10
    *p = 45;
    printf("x = %d \n", x);  // 45
    char c = 'N';
    int d = 10;
    short s = 2;
     
    char *pc = &c;          // получаем адрес переменной с типа char
    int *pd = &d;           // получаем адрес переменной d типа int
    short *ps = &s;         // получаем адрес переменной s типа short
     
    printf("Variable c: address=%p \t value=%c \n", (void*) pc, *pc);
    printf("Variable d: address=%p \t value=%d \n", (void*) pd, *pd);
    printf("Variable s: address=%p \t value=%hd \n", (void*) ps, *ps);
    return 0;
}