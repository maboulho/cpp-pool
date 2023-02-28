/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:48:07 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/24 18:45:33 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
HumanB::HumanB(std::string name) : name(name)
{
    this->weapon = NULL;
    std::cout << "HumanB " << this->name << " created with no weapon"<< std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}
void    HumanB::attack()
{
    if(this->weapon == NULL)
        std::cout << this->name << " has no weapon" << std::endl;
    else
        std::cout << this->name << " attacked with " << this->weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}