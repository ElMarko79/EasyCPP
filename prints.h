#ifndef PRINT
#define PRINT

#include <iostream>
#include <type_traits>
#include <string>
#include <list>
#include <vector>
#include <Windows.h>

template <typename T>
void print(T value) 
{
    if (std::is_arithmetic<T>::value)
    {
        std::cout << value << std::endl;
    }
    else if (std::is_same<T, std::string>::value || std::is_same<T, const char*>::value)
    {
        std::cout << value << std::endl;
    }
}

template<typename Container>
void printList(const Container& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

#endif