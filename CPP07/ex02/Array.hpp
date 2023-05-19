#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array();

        Array &operator=(const Array &copy);
        T &operator[](unsigned int i);

        unsigned int getSize() const;

        class OutOfRangeException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};

template <typename T>
Array<T>::Array() : array(NULL), size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), size(n)
{
}

template <typename T>
Array<T>::Array(const Array &copy) : array(NULL), size(0)
{
    *this = copy;
}

template <typename T>
Array<T>::~Array()
{
    if (this->array)
        delete [] this->array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
    if (this->array)
        delete [] this->array;
    this->array = new T[copy.size];
    for (unsigned int i = 0; i < copy.size; i++)
        this->array[i] = copy.array[i];
    this->size = copy.size;
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->size)
        throw OutOfRangeException();
    return (this->array[i]);
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return (this->size);
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
    return ("Out of range");
}

