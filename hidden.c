#include <stdio.h>
 
int n = 5;
 
int main(void)
{
    int n = 10;
    printf("n=%d \n", n);       // n=10
    {
        int n = 20;
        printf("n=%d \n", n);   // n=20
    }
    return 0;
}