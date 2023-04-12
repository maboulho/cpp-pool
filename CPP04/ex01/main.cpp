/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:07:13 by maboulho          #+#    #+#             */
/*   Updated: 2023/04/07 01:25:22 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal	*(animal_array[4]);

    
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        animal_array[i]->makeSound();
        std::cout << animal_array[i]->getType() << std::endl;
	}
    
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
		
	return 0;
}
