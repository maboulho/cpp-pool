/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:03:58 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/09 02:35:33 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    Phonebook ph;
    std::string str;
    while(std::cin)
    {
        std::cout << "\nEnter a command\n";
        std::cin >> str;
        if (str == "ADD")
        {
            std::cout << "Enter first name: ";
            
        }
        // if(str == "EXIT")
        //     break;
        // else if(str == "ADD")
        //     ph.add();
        // else if(str == "SEARCH")
        //     ph.search();
        // else if(str.empty())
        //     std::cout << "empty command\n";
        // else
        //     std::cout << "Oopsie command not found\n";
    }
    return (0);
}