/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:37:18 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/20 05:02:02 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include"Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
 jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}

