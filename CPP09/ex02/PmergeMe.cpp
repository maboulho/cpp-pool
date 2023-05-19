/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:45:11 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/16 17:02:22 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    return ;
}

PmergeMe::~PmergeMe()
{
    return ;
}

PmergeMe::PmergeMe(PmergeMe const &to_copy)
{
    *this = to_copy;
    return ;
}
void    PmergeMe::isvalid(char *s1)
{
   if(std::atoi(s1) < 0)
         std::cerr << "Error: invalid input" << std::endl,exit(0);
    return ;
}
PmergeMe &PmergeMe::operator=(PmergeMe const &to_copy)
{
    if (this != &to_copy)
    {
        this->_v = to_copy._v;
        this->_d = to_copy._d;
    }
    return (*this);
}

void    PmergeMe::fill_vector(char **av,int ac)
{
    for (int i = 1; i < ac; i++)
    {
        isvalid(av[i]);
        this->_v.push_back(std::atoi(av[i]));
    }
}


void    PmergeMe::fill_deque(char **av,int ac)
{
   for (int i = 1; i < ac; i++)
   {
        isvalid(av[i]);
        this->_d.push_back(std::atoi(av[i]));
   }

}

void    PmergeMe::print_vector()
{
    for (std::vector<unsigned int>::iterator it = _v.begin(); it != _v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    PmergeMe::print_deque()
{
    for (std::deque<unsigned int>::iterator it = _d.begin(); it != _d.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    PmergeMe::Insert_Vector(size_t size)
{
    if(size == 0)
        return ;
    if(_v[size] < _v[size - 1])
        std::swap(_v[size], _v[size - 1]);
    if(size - 1 != 0)
        Insert_Vector(size - 1);
}   

void    PmergeMe::Insert_Deque(size_t size)
{
    if(size == 0)
        return ;
    if(_d[size] < _d[size - 1])
        std::swap(_d[size], _d[size - 1]);
    if(size - 1 != 0)
        Insert_Deque(size - 1);
}

void    PmergeMe::Merge_Vector(size_t left,size_t right,size_t mid)
{
    std::vector<unsigned int>    tmp_left;
    std::vector<unsigned int>    tmp_right;
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    
    for (int i = 0; i < leftSize; ++i)
    {
        if(left + i < _v.size())
        tmp_left.push_back(_v[left + i]);
        
    }
    for (int j = 0; j < rightSize; ++j)
    {
        if(mid + 1 + j < _v.size())
            tmp_right.push_back(_v[mid + 1 + j]);
    }
    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize) {
        if (tmp_left[i] <= tmp_right[j]) {
            _v[k] = tmp_left[i];
            ++i;
        } else {
            _v[k] = tmp_right[j];
            ++j;
        }
        ++k;
    }
    while (i < leftSize) {
        _v[k] = tmp_left[i];
        ++i;
        ++k;
    }
    while (j < rightSize) {
        _v[k] = tmp_right[j];
        ++j;
        ++k;
    }
}

void    PmergeMe::Merge_Deque(size_t left,size_t right,size_t mid)
{
    std::deque<unsigned int>    tmp_left;
    std::deque<unsigned int>    tmp_right;

    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    for (int i = 0; i < leftSize; ++i)
    {
        if(left + i < _d.size() )
         tmp_left.push_back(_d[left + i]);
    }
    for (int j = 0; j < rightSize; ++j)
    {
        if(mid + 1 + j < _d.size())
            tmp_right.push_back(_d[mid + 1 + j]);
    }

    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize) {
        if (tmp_left[i] <= tmp_right[j]) {
            _d[k] = tmp_left[i];
            ++i;
        } else {
            _d[k] = tmp_right[j];
            ++j;
        }
        ++k;
    }
    while (i < leftSize) {
        _d[k] = tmp_left[i];
        ++i;
        ++k;
    }
    while (j < rightSize) {
        _d[k] = tmp_right[j];
        ++j;
        ++k;
    }
}


void    PmergeMe::Merge_Insert_Deque(size_t left,size_t right)
{
    size_t mid;

    if (right - left  + 1 <= 10)
    {
        for (size_t i = left ; i <= right; i++)
            Insert_Deque(i);
    }
    else if( left < right)
    {
        mid = left + (right - left) / 2;
        Merge_Insert_Deque(left, mid);
        Merge_Insert_Deque(mid + 1, right);
        Merge_Deque(left, right, mid);
    }
}

void    PmergeMe::Merge_Insert_Vector(size_t left,size_t right)
{
       size_t mid;

    if (right - left  + 1 <= 10)
        for (size_t i = left ; i <= right; i++)
            Insert_Vector(i);
    else if(left < right)
    {
        mid = left + (right - left) / 2;
        Merge_Insert_Vector(left, mid);
        Merge_Insert_Vector(mid + 1, right);
        
        Merge_Vector(left, right, mid);
    }  
}