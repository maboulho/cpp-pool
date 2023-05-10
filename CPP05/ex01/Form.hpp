#ifndef FORM_HPP
#define FORM_HPP
#include<iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        std::string const   Name;
        bool                Signed;
        int const           GradeToSign;
        int const           GradeToExecute;
    public:

        class GradeTooHighException : public std::exception
        {
            public :   
             const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
             const char *what() const throw();
        };
        Form();
        Form(std::string name, int gradeToSign);
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &copy);
        Form &operator=(Form const &copy);
        ~Form();

        std::string const   &getName()const;
        bool                getSigned()const;
        int const           &getGradeToSign()const;
        int const           &getGradeToExecute()const;
        void                beSigned(Bureaucrat &bureaucrat);
        
};
std::ostream &operator<<(std::ostream &out, Form const &form);
#endif
