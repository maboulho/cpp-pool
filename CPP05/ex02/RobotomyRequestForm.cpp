/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:20:34 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/08 08:07:04 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &to_copy) : AForm(to_copy)
{
    this->_target = to_copy._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &to_copy)
{
    if (this != &to_copy)
    {
        this->_target = to_copy._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

const char *RobotomyRequestForm::ExecuteException::what() const throw()
{
    return ("RobotomyRequestForm::ExecuteException");
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw()
{
    return ("RobotomyRequestForm::GradeTooLowException");
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return ("RobotomyRequestForm::GradeTooHighException");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        if(rand() % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
         else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
}

