/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:00:53 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/23 00:42:22 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif