#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &to_copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &to_copy);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &executor) const;


    std::string getTarget() const;

    class ExecuteException : public std::exception
    {
         const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, PresidentialPardonForm const &to_copy);

#endif