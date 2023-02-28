/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:04:56 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/22 23:57:54 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}
void    Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}