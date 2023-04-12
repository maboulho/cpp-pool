/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:38:32 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:48:31 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& _obj);
        Cure& operator=(const Cure& _obj);
        ~Cure();

        AMateria*   clone() const;
        void    use(ICharacter& character);
};

#endif