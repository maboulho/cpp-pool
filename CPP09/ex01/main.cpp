/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:27:01 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/14 19:46:58 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

#include "RPN.hpp"

int main(int ac,char **av)
{
    {
    RPN obj;
    if (ac != 2)
    {
        std::cerr << "Error\n";
        exit(0);
    }
    else
    {
        try
        {
            obj.check_arg(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
        }
        
    }
}
}