#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
class AForm;

class Intern
{
    public:
        Intern( void );
        Intern( Intern const & src );
        ~Intern( void );

        Intern & operator=( Intern const & rhs );

        AForm *makeForm(std::string const name, std::string const target);

        
};


#endif