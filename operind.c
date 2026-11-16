#include <stdio.h>
 
int main(void)
{
    int a = 10;
    int b = 2;
     
    int *pa = &a;
    int *pb = &b;
     
    printf("Variable a: address=%p \t value=%d \n", (void*)pa, *pa);
    printf("Variable b: address=%p \t value=%d \n", (void*)pb, *pb);
     
    pa = pb;    // теперь указатель pa хранит адрес переменной b
    printf("Variable b: address=%p \t value=%d \n", (void*)pa, *pa);
    *pa = 25;
     
    printf("Value on pointer pa: %d \n", *pa);  // 25
    printf("Value on pointer pb: %d \n", *pb);  // 25
    printf("Value of variable a: %d \n", a);    // 25
    int x = 123;
    int *ip = &x;       // указатель хранит адрес объекта int
    void *vp; 
    vp = ip;            // void-указатель получает адрес из указателя ip
    printf("Value: %d\n", *((int *)vp));    // Value: 123
    printf("vp: %p\n", vp);         // получаем адрес, который хранится в указателе vp
    printf("ip: %p\n", (void*)ip);  // преобразование к типу void* - получаем адрес из указателя ip
    int a1 = 10;
    int b1 = 20;
    int *pa1 = &a1;
    int *pb1 = &b1;
    if(pa1 > pb1)
    printf("pa1 (%p) is greater than pb1 (%p) \n",  (void*)pa1,  (void*)pb1);
    else
    printf("pa1 (%p) is less or equal pb1 (%p) \n",  (void*)pa1,  (void*)pb1);

    char c = 'N';
    char *pc = &c;
    int *pd = (int *)pc;
    printf("pc=%p \n",  (void*)pc);
    printf("pd=%p \n",  (void*)pd);
     
    return 0;
}