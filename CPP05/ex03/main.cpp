/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 05:47:34 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/09 03:21:01 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main( void )
{
    Intern someRandomIntern;
    Intern someRandomIntern2;
    Intern someRandomIntern3;
    
    AForm* rrf;
    AForm* srf;
    AForm* ppf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    srf = someRandomIntern2.makeForm("shrubbery cAreation", "Bender");
    ppf = someRandomIntern3.makeForm("presidential pAardon", "Bender");
}