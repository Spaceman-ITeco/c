#include <stdio.h>
 
int main(void)
{
    if(1) printf("Hello C \n");
      
    if(0) printf("Hello World \n");
    
    int n = 10;
 
    if(n == 20) printf("n = 20 \n");
    if(n == 10) printf("n = 10 \n");

    int x = 60;
      
    if(x > 50) 
    {
        printf("if statement \n");
        printf("x is greater than 50 \n");
    }
    
    int x1 = 50;
    int y1 = 60;
    if (x1 > 20 && y1 < 100)
    {
        printf("the condition is true\n");
    }

    int x2 = 60;
    if(x2 > 60) 
    printf("x2 is greater than 60 \n");
    else
    printf("x2 is less or equal 60 \n");

    int x3 = 60;
     
    if(x3 > 60)    
    printf("x3 is greater than 60 \n");
    else if (x3 < 60)
    printf("x3 is less than 60 \n");
    else
    printf("x3 is equal 60 \n");

    int x4 = 60;
      
    if(x4 > 60)
    {
        printf("if statement \n");
        printf("x4 is greater than 60 \n");
    }
    else if (x4 < 60)
    {
        printf("else if statement \n");
        printf("x4 is less than 60 \n");
    }
    else
    {
        printf("else statement \n");
        printf("x4 is equal 60 \n");
    }

     int x5 = 2;
     
    switch(x5)
    {
        case 1: 
            printf("x5 = 1 \n");
            break;
        case 2: 
            printf("x5 = 2 \n");
            break;
        case 3: 
            printf("x5 = 3 \n");
            break;
    }

    int x6=5;
    int y=2;
     
    int z = x6 > y ? x6-y : x6+y;
     
    printf("z = %d", z);        // z = 3
      
    return 0;
}