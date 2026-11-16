#include <stdio.h>
  
int main(void)
{   
    int array[] = {1, 2, 3, 4};
    int *p[] = { &array[1], &array[2], &array[0] };
 
    for(int i = 0; i < 3; i++)
    {
        printf("%d \n", *p[i]);
    }
    int array1[] = {11, 12, 13};
    int (*pa)[3] = &array1;  // указатель на массив 
 
    printf("array1[0] = %d\n", (*pa)[0]);
    printf("array1[1] = %d\n", (*pa)[1]);
    printf("array1[2] = %d\n", (*pa)[2]);
    int *pb[] = { &array[1], &array[2], &array[0] }; // массив указателей
 
    // перебираем массив через указатель на массив
    printf("Pointer to Array\n");
    for(size_t i = 0; i < sizeof(*pa)/sizeof(*pa[0]); i++)
    {
    printf("%d\n", (*pa)[i]);
    }
 
    // перебираем массив указателей
    printf("Array of Pointers\n");
    for(size_t i = 0; i < sizeof(pb)/sizeof(pb[0]); i++)
    {
    printf("%d\n", *pb[i]);
    }
    char *fruit[] = {"apricot", "apple", "banana", "lemon", "orange"};
    for(int i=0; i < 5; i++)
    {
        printf("%s \n", fruit[i]);
    }
    int  x = 22;
    int *px = &x;       // указатель px хранит адрес переменной x
    int **ppx = &px;    // указатель ppx хранит адрес указателя px
         
    printf("Address of px: %p \n", (void *)ppx);
    printf("Address of x: %p \n", (void *)*ppx);
    printf("Value of x: %d \n", **ppx);
    return 0;
    }