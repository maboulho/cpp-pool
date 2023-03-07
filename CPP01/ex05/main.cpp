/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:11:36 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/07 20:25:54 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
int main()
{
    Harl Harli;
    Harli.complain("DEBUG");
    Harli.complain("INFO");
    Harli.complain("WARNING");
    Harli.complain("ERROR");
    Harli.complain("ZBI");
}