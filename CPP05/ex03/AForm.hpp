#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        std::string const Name;
        int const GradeToSign;
        int const GradeToExecute;
        bool Signed;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &copy);
        AForm &operator=(AForm const &copy);
        virtual ~AForm();



        std::string const &getName()const;
        bool getSigned()const;
        int const &getGradeToSign()const;
        int const &getGradeToExecute()const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void  execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception
        {
             const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
             public:
             const char* what() const throw();
        };
        class ExecuteException : public std::exception
        {
               public:
                    const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, AForm const &form); 


#endif

