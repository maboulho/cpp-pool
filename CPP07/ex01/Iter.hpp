#pragma once
#include<iostream>
template<typename T>

void iter(T *ar ,size_t size,void (*function)(T const &))
{
    for(size_t i = 0;i < size ;++i){
        function(ar[i]);
    }
}

template<typename T>
void    print(T const &x)
{
    std::cout << x << std::endl;
}

template<typename T>
void    add(T const &x)
{
    std::cout << x + 1 << std::endl;
}