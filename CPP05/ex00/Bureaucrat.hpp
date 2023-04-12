#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
class Bureaucrat
{
private:
    std::string     Name;
    int             Grade;
public:
    class Exception : public std::exception
    {
        private:
        std::string msg;
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