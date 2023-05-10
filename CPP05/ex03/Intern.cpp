/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:55:30 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/09 03:26:55 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern( void ) {}

Intern::Intern( Intern const & src )
 { 
    *this = src; 
}

Intern::~Intern( void ) {}

Intern & Intern::operator=( Intern const & rhs )
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

AForm *Intern::makeForm(std::string const name, std::string const target)
{
   std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    AForm *form_ptr[3] = {new RobotomyRequestForm(target)
    , new PresidentialPardonForm(target)
    , new ShrubberyCreationForm(target)};
    
    for (int i = 0; i < 3; i++)
    {
        if (name == form[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (form_ptr[i]);
        }
        delete form_ptr[i];
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return nullptr;
}


