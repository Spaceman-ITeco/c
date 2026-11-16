#include <stdio.h>
int main(void)
{
    int numbers[4];
    numbers[0] = 6;
    printf ("numbers[0] = %d \n", numbers[0]);
     numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
     
    printf("numbers[0] = %d \n", numbers[0]);   // 1 - первый элемент
    printf("numbers[2] = %d \n", numbers[2]);   // 3 - третий элемент
    int numbers1[4] = { 1, 2, 3, 5 };        // инициализация массива
    printf("numbers1[2] = %d\n", numbers1[2]);  // 3
    int numbers2[5] = { [1]=11, [3] = 13 };
    printf("numbers2[3] = %d\n", numbers2[3]); 
    int numbers3[] = { 5, 6, 7};
    size_t size = sizeof(numbers3);
    printf("numbers3 size: %zu \n", size);
    size_t count = sizeof(numbers3) / sizeof(int);
    printf("numbers3 count: %zu \n", count);         // numbers count: 3
    size_t count1 = sizeof(numbers3) / sizeof(numbers3[0]);
    printf("numbers3 count: %zu \n", count);         // numbers count: 3
    int numbers4[] = { 10, 12, 13, 54, 43 };
    size_t count2 = sizeof(numbers4) / sizeof(numbers4[0]);
    for(size_t i =0; i < count2; i++)
    {
        printf("numbers4[%zu] = %d \n", i, numbers4[i]);
    }
    #define maxSize 3
    int array[maxSize];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    for (int i = 0; i < maxSize; i++)
    {
        printf("%d \n", array[i]);
    }
    int numbers5[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    printf("numbers5[1][0] = %d \n", numbers5[1][0]);     // 4
    int numbers6[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    // проходим по 3 строкам таблицы
    for(int i =0; i < 3; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(int j =0; j<2; j++)
        {
            printf("numbers6[%d][%d] = %d \n", i, j, numbers6[i][j]);
        }
    }
    int numbers7[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    size_t rows_count = sizeof(numbers7) / sizeof(numbers7[0]);           // 3
    size_t columns_count = sizeof(numbers7[0]) / sizeof(numbers7[0][0]);  // 2
    printf("rows count = %zu \n", rows_count);
    printf("columns count = %zu \n", columns_count);
    // проходим по 3 строкам таблицы
    for(size_t i =0; i < rows_count; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(size_t j =0; j<columns_count; j++)
        {
            printf("numbers7[%zu][%zu] = %d \n", i, j, numbers7[i][j]);
        }
    }
    return 0;
}