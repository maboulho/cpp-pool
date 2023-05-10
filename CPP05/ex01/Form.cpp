/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:28:17 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/07 03:15:13 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("Default"), Signed(false), GradeToSign(150), GradeToExecute(150)
{
    
}

Form::Form(std::string name, int gradeToSign) : Name(name), Signed(false), GradeToSign(gradeToSign), GradeToExecute(gradeToSign)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : Name(name), Signed(false), GradeToSign(gradeToSign), GradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) : Name(copy.Name), Signed(copy.Signed), GradeToSign(copy.GradeToSign), GradeToExecute(copy.GradeToExecute)
{
    
}

Form &Form::operator=(Form const &copy)
{
    if (this != &copy)
    {
        this->Signed = copy.Signed;
    }
    return (*this);
}

Form::~Form()
{
}

std::string const &Form::getName() const
{
    return (this->Name);
}

bool Form::getSigned() const
{
    return (this->Signed);
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->GradeToSign)
        throw Form::GradeTooLowException();
    else
        this->Signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << form.getName() << " is " << (form.getSigned() ? "signed" : "not signed") << std::endl;
    return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

int const &Form::getGradeToSign() const
{
    return (this->GradeToSign);
}

int const &Form::getGradeToExecute() const
{
    return (this->GradeToExecute);
}

