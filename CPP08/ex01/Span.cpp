/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 00:30:57 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/13 02:38:36 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0) {
    
}

Span::Span(unsigned int n) : _n(n) {
    
}

Span::Span(Span const & toCopy) {
    *this = toCopy;
}

Span & Span::operator=(Span const & toCopy) {
    if (this != &toCopy)
    {
        this->_n = toCopy._n;
        this->_v = toCopy._v;
    }
    return *this;
}

Span::~Span() {
    
}

void Span::addNumber(int nb) {
    if (this->_v.size() < this->_n)
        this->_v.push_back(nb);
    else
        throw FullSpanException();
}

void  Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (this->_v.size() <= this->_n)
        std::copy(begin, end, std::back_inserter(this->_v));
    else
        throw FullSpanException();
}

int Span::shortestSpan() const{
    if (this->_v.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

long Span::longestSpan() const{
    if (this->_v.size() < 2)
        throw NotEnoughNumbersException();
    std::vector<int> tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    return static_cast<long>(tmp[tmp.size() - 1]) - static_cast<long>(tmp[0]);
}

const char* Span::FullSpanException::what() const throw() {
    return "Span is full";
}

const char* Span::NotEnoughNumbersException::what() const throw() {
    return "Not enough numbers in Span";
}

