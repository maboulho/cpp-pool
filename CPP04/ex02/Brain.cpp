/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:02:12 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 20:20:23 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"
Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &_obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = _obj;
}

Brain& Brain::operator=(Brain const& _obj)
{
    for (size_t i = 0; i < 100; i++)
        ideas[i] = _obj.ideas[i];
    std::cout << "Brain copy assignment constructor called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
