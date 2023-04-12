/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:30:27 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 20:33:00 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include<iostream>
class Animal
{
protected:
    std::string type;    
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &_obj);
    Animal& operator=(Animal const& _obj);
    virtual ~Animal();
    std::string const  &getType()const;
    virtual void    makeSound()const = 0;
};



#endif