/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:57:14 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/22 21:35:24 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include"IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& _obj);
        MateriaSource &operator=(const  MateriaSource& _obj);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif