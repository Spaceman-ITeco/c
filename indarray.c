#include <stdio.h>
 
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    printf("array[0] = %d  \n", *array);    // array[0] = 1
    int second = *(array + 1); // получим второй элемент
    printf("array[1] = %d  \n", second);    // array[1] = 2
    int third = 2[array];
    printf("array[2] = %d  \n", third); // array[2] = 3
    for(int i = 0; i < 5; i++)
    {
        void* address = array + i;  // получаем адрес i-го элемента массива
        int value = *(array + i);   // получаем значение i-го элемента массива
        printf("array[%d]: address=%p \t value=%d \n", i, address, value);
    }
    int *ptr = array;   // указатель ptr хранит адрес первого элемента массива array
    ptr = ptr + 4;      // перемезаем указатель на 2 элемента вперед
    printf("value: %d \n", *ptr);   // value: 5
   
    int array1[5] = {1, 2, 3, 4, 5};
    int *ptr1 = array1;       // указатель ptr хранит адрес первого элемента массива array
    ptr1 = ptr1 + 2;          // переходим к третьему элементу
    *ptr1 = 8;               // меняем значение элемента, на который указывает указатель
 
    printf("array1[2]: %d \n", array1[2]);    // array1[2] : 8
    for(int *ptr1=array1; ptr1<=&array1[4]; ptr1++)
{
    printf("address=%p \t value=%d \n", (void*)ptr1, *ptr1);
}
    return 0;
}