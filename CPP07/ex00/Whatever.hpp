#pragma once

#include<iostream>
template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T &a , T &b)
{
    if(a > b)
        return b;
    else if (b > a)
        return a;
    else
        return b;
}

template<typename T>
T max (T &a , T &b)
{
    if(a < b)
        return b;
    else if (b < a)
        return a;
    else
        return b;
}