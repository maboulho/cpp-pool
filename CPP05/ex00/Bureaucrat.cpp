/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:22:20 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/05 13:26:20 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;   
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;   
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;   
    this->Name = name;
    this->Grade = grade;
    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    std::cout << "Bureaucrat constructor called" << std::endl;   
    this->Name = copy.Name;
    this->Grade = copy.Grade;

    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if( this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
    std::cout << "Bureaucrat constructor called" << std::endl;   
    this->Name = copy.Name;
    this->Grade = copy.Grade;
    return *this;
}

std::string const &Bureaucrat::getName()const
{
    return this->Name;
}

int const &Bureaucrat::getGrade()const
{
    return this->Grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->Grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->Grade++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return o;
}

