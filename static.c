#include <stdio.h>
 
void displayStat()
{
    static int i = 0;
    i++;
    printf("stat i=%d \n", i);
}

void display()
{
    int i = 0;
    i++;
    printf("i=%d \n", i);
}
 
int main(void)
{
    displayStat();
    displayStat();
    displayStat();
    display();
    display();
    display();
    return 0;
}