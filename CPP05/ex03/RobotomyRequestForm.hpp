#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>


class AForm;
class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &to_copy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &to_copy);
    ~RobotomyRequestForm();
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

#endif
