#include <stdio.h>
  
typedef void (message)(void);
 
void hello() { printf("Hello, World \n"); }
void goodbye() { printf("Good Bye, World \n");}
 
int main(void)
{
    message* mes1 = &hello;  // указатель указывает на функцию hello
    message* mes2 = &goodbye;  // указатель указывает на функцию goodbye
 
    mes1();      // Hello, World
    mes2();      // Good Bye, World
      
    return 0;
}