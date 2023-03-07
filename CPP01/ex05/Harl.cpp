
#include"Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug( void )
{
    std::cout << "\t\t\t[DEBUG]I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "\t\t\t[INFO]I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "\t\t\t[WARNING]I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "\t\t\t[ERROR]This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
    size_t l = 0;
    std::string str[4] = {"DEBUG","INFO","WARNING","ERROR"};

    for (size_t i = 0; i < 4; i++)
    {
        if (str[i] == level)
            l = i;
    }
    switch (l)
    {
    case 0:
    {
        debug();
        break;
    }
    case 1:
    {
        info();
        break;
    }
    case 2:
    {
        warning();
        break;
    }
    case 3 :
    {
        error();
        break;
    }
    default:
    {
        std::cout << "\t\t\tWrong Input choose another.\n" << std::endl;
        break;
    }
    }
}