/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:19:25 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/08 09:57:08 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &to_copy) : AForm(to_copy)
{
    this->_target = to_copy._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &to_copy)
{
    if (this != &to_copy)
    {
        this->_target = to_copy._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if(this->getSigned() == false)
        throw ShrubberyCreationForm::ExecuteException();
    else if(executor.getGrade() > this->getGradeToExecute())
        throw ShrubberyCreationForm::GradeTooLowException();
    else
    {
        std::ofstream file;
        std::string name = this->getTarget() + "_shrubbery";
        file.open(name.c_str(), std::ofstream::out);

        file << "      # #### ####               " << std::endl;
        file << "     ### \\/#|### |/####        " << std::endl;
        file << "    ##\\/#/ \\||/##/_/##/_#     " << std::endl;
        file << "  ###  \\/###|/ \\/ # #####     " << std::endl;
        file << " ##_\\_#\\_\\## | #/###_/_####  " << std::endl;
        file << "## #### # \\ #| /  #### ##/##   " << std::endl;
        file << " __#_--###`  |{,###---###-~     " << std::endl;
        file << "          \\ }{                 " << std::endl;
        file << "           }}{                  " << std::endl;
        file << "           }}{                  " << std::endl;
        file << "      ejm  {{}                  " << std::endl;
        file << "     , -=-~{ .-^- _             " << std::endl;
        file << "           `}                   " << std::endl;
        file << "            {                   " << std::endl;

        file.close();
            
    }
}

const char* ShrubberyCreationForm::ExecuteException::what() const throw()
{
    return ("Form is not signed");
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

