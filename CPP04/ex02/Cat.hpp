/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:30:41 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 20:31:26 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include<iostream>
#include"Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
    std::string name;
    Brain   *brain;
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &_obj);
    Cat& operator=(Cat const& _obj);
    ~Cat();
    void    makeSound()const;
};




#endif