#include <windows.h>
#include <stdio.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8); // Вывод в UTF-8
    SetConsoleCP(CP_UTF8);       // Ввод в UTF-8 (если нужен)

    printf("Привет мир! \n");
    return 0;
}