/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:30:47 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 20:30:49 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include<iostream>
#include"Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
    std::string name;
    Brain *brain;
public:
    Dog();
    Dog(std::string Name);
     Dog(const Dog &_obj);
    Dog& operator=(Dog const& _obj);
    ~Dog();
    void    makeSound()const;
};

#endif