/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:10:09 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/08 08:07:44 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &to_copy) : AForm(to_copy)
{
    this->_target = to_copy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &to_copy)
{
    if (this != &to_copy)
    {
        this->_target = to_copy._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if(executor.getGrade() > this->getGradeToExecute())
        throw PresidentialPardonForm::GradeTooLowException();
    else
        std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

const char *PresidentialPardonForm::ExecuteException::what() const throw()
{
    return ("PresidentialPardonForm::ExecuteException");
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    return ("PresidentialPardonForm::GradeTooLowException");
}   

const char *PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    return ("PresidentialPardonForm::GradeTooHighException");
}   

