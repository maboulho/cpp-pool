/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:01:21 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/17 03:32:29 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    return ;
}

RPN::~RPN()
{
    return ;
}

RPN::RPN(RPN const &to_copy)
{
    *this = to_copy;
    return ;
}

RPN &RPN::operator=(RPN const &to_copy)
{
    if (this != &to_copy)
    {
        this->_stack = to_copy._stack;
    }
    return (*this);
}

void    RPN::check_arg(std::string arg)
{
    std::string ope = "+-*/";
    size_t index = 0;
    size_t index2= 0;
    for(size_t i = 0; i < arg.length() ;i++)
    {
        if(isdigit(arg[i]))
        {
            index++;
            _stack.push(arg[i] - '0');
        }
        else if (ope.find(arg[i]) != std::string::npos)
		{
			index2++;
			int n1 = _stack.top();
			_stack.pop();
            if(!_stack.size())
                throw std::invalid_argument("too many operators \n");
            int n2 = _stack.top();
            _stack.pop();
			_stack.push(RpnCalculater(n1, n2, arg[i]));
		}
        else if(isspace(arg[i]))
            continue;
        else
            throw std::invalid_argument("Invalid input\n");    
    }
    if((index2 + 1) != index)
        throw std::invalid_argument("Invalid input\n");
    std::cout << _stack.top()<< std::endl;
}

int     RPN::RpnCalculater(int n1, int n2, char op)
{
    switch (op)
    {
        case '+':
            return (n1 + n2);
        case '-':
            return (n2 - n1);
        case '*':
            return (n1 * n2);
        case '/':
        {
            if(n2 == 0)
                throw std::invalid_argument("Invalid input\n");
            return (n2 / n1);
        }
        default:
            throw std::invalid_argument("Invalid input\n");
    }
}
