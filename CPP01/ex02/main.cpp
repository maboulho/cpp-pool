/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:16:21 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/23 17:29:08 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string stringREF = brain;
	
	std::cout << "The memory address of the string brain : " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "The value of the string variable : " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

}