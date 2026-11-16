#include <stdio.h>
 
 
int main(void)
{
    const int cx = 10;
    // получаем адрес константы, преобразуем в указатель типа int* и изменяем по нему значение
    *(int*) &cx = 20;   
    printf("cx: %d\n", cx);  // cx: 20
 
    // то же самое, только разбито на два этапа
    int* cx_p = &cx;    
    *cx_p = 66;
    printf("cx: %d\n", cx); // cx: 66
    const int a = 10;
    const int *pa = &a;
    printf("address=%p \t value=%d \n", pa, *pa);
    return 0;
}