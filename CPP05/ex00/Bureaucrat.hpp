#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
class Bureaucrat
{
private:
    std::string     Name;
    int             Grade;
public:
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return("Grade too high");
        } 
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return("Grade too low");
        } 
    };

    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &copy);
    Bureaucrat &operator=(Bureaucrat const &copy);
    ~Bureaucrat();

    std::string const     &getName()const;
    int const       &getGrade()const;
    void            incrementGrade();
    void            decrementGrade();
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);
#endif