#include <stdio.h>
 
void printn()
{
    int n = 63;
    printf("n=%d \n", n);
}
 
int main(void)
{
    int a = 2;
    printn();               // n=63
    //n++;      так сделать нельзя, так как n определена в функции printn
    printf("a=%d \n", a);   // a=2
    return 0;
}