#include <stdio.h>
 
int main(void)
{
    int n = 10;
     
    int *ptr = &n;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
     
    ptr++;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);
     
    ptr--;
    printf("address=%p \t value=%d \n", (void*)ptr, *ptr);

    double d = 10.6;
    double *pd = &d;
    printf("Pointer pd: address=%p \n", (void*)pd);
    pd++;
    printf("Pointer pd: address=%p \n", (void*)pd);
         
    char c = 'N';
    char *pc = &c;
    printf("Pointer pc: address=%p \n", (void*)pc);
    pc++;
    printf("Pointer pc: address=%p \n", (void*)pc);
    int nums[] = {11, 12, 13, 14};
    void *p_num = nums;

    // сдвиг на 2 элемента int вперёд
    printf("*p_num: %d\n", *(int*)((char*)p_num + 2 * sizeof(int)));
     
    return 0;
}