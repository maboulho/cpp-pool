/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:30:36 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 20:30:38 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include"Animal.hpp"
class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &_obj);
    Brain& operator=(Brain const& _obj);
    ~Brain();
};



#endif