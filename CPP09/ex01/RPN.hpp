#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
class RPN
{
    private :
        std::stack<int> _stack;

    public :
        RPN();
        ~RPN();
        RPN(RPN const &to_copy);
        RPN &operator=(RPN const &to_copy);

        void    check_arg(std::string arg);
        int     RpnCalculater(int n1, int n2, char op);
};

#endif