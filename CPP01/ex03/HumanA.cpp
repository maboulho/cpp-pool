/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:47:13 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/24 18:40:28 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
    std::cout << "HumanA " << this->name << " created with "<< this->weapon.getType() << std::endl; 
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->name << " attacked with " << this->weapon.getType() << std::endl;
}