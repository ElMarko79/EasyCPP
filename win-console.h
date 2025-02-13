#ifndef CONSOLEIO
#define CONSOLEIO

#include <Windows.h>

void UsingUTF8()
{
    SetConsoleCP(CP_UTF8), SetConsoleOutputCP(CP_UTF8);
}
void ConsoleClean()
{
    system("cls");
}

#endif