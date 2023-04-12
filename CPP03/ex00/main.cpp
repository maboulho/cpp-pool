/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 06:42:33 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 09:53:17 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
// #include <iostream>
// #include "ClapTrap.hpp"

// void printInfo(const ClapTrap &player){
//     std::cout << "Name: " << player.get_Name() << std::endl;
//     std::cout << "Hit Points " << player.get_HitPoints() << std::endl;
//     std::cout << "Energy Points " << player.get_EnergyPoints() << std::endl;
//     std::cout << "Attack damage " << player.get_AttackDamage() << std::endl;
// }

// int main(){

//   {
//     ClapTrap fighterOne;
//     ClapTrap fighterTwo("fightertwo");
//     ClapTrap loser("loser");

//     std::cout << std::endl;
//     printInfo(fighterOne);
//     std::cout << std::endl;
//     printInfo(fighterTwo);
//     std::cout << std::endl;
//     printInfo(loser);
    
//     std::cout << "--------------------------fight ----------------" << std::endl;

//     fighterOne.attack(loser.get_Name());
//     loser.takeDamage(fighterOne.get_AttackDamage());
//     fighterTwo.attack(loser.get_Name());
//     loser.takeDamage(fighterTwo.get_AttackDamage());
//     fighterTwo.attack(fighterOne.get_Name());
//     fighterOne.takeDamage(fighterTwo.get_AttackDamage());
//     fighterOne.beRepaired(30);
//     loser.attack(fighterTwo.get_Name());
//     fighterTwo.takeDamage(loser.get_AttackDamage());

//     std::cout << std::endl;
//     printInfo(fighterOne);
//     printInfo(fighterTwo);
//     printInfo(loser);
//     std::cout << "--------------------------the fight is finish-----------------------"<<std::endl;
//   }
//     return (0);
// }
void	alice_rundown(void)
{
	ClapTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
}

void	bob_rundown(void)
{
	ClapTrap	bob("Bob");

	while (bob.get_HitPoints())
	{
		bob.takeDamage(2);
		bob.beRepaired(2);
	}
	bob.takeDamage(1);
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	alice_rundown();
	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	bob_rundown();
}