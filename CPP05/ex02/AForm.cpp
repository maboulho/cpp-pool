/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:25:16 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/08 05:29:13 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("default"), GradeToSign(150), GradeToExecute(150), Signed(false)
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : Name(name), GradeToSign(gradeToSign), GradeToExecute(gradeToExecute), Signed(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &to_copy) : Name(to_copy.Name), GradeToSign(to_copy.GradeToSign), GradeToExecute(to_copy.GradeToExecute), Signed(to_copy.Signed)
{
}

AForm &AForm::operator=(AForm const &to_copy)
{
    if (this != &to_copy)
    {
        this->Signed = to_copy.Signed;
    }
    return (*this);
}

AForm::~AForm()
{
}

std::string const &AForm::getName() const
{
    return (this->Name);
}

int const &AForm::getGradeToSign() const
{
    return (this->GradeToSign);
}

int const &AForm::getGradeToExecute() const
{
    return (this->GradeToExecute);
}

bool AForm::getSigned() const
{
    return (this->Signed);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->GradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->Signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
    out << form.getName() << ", form grade required to sign : " << form.getGradeToSign() << ", form grade required to execute : " << form.getGradeToExecute() << ", form is signed : " << form.getSigned() << std::endl;
    return (out);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char *AForm::ExecuteException::what() const throw()
{
    return ("Form is not signed");
}
