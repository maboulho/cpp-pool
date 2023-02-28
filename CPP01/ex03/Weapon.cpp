/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:39:38 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/24 18:39:24 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
Weapon::Weapon(std::string type)
{
    this->type = type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
 }

const std::string &Weapon::getType() const
{
     return this->type;
}
Weapon::~Weapon()
{
    
}
