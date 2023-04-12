/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:42:10 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/23 04:29:40 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        me->use(2, *bob);
        delete bob;
        delete me;
        delete src;
    }

    // {
    //     MateriaSource src;
        
    //     src.learnMateria(new Ice());
    //     src.learnMateria(new Ice());
    //     src.learnMateria(new Ice());
    //     src.learnMateria(new Ice());
    //     src.learnMateria(new Ice());
        
    //     MateriaSource des;
    //     des.learnMateria(new Cure());

    //     des = src;

    //     Character haytam("haytam");
        
    //     des.createMateria("ice")->use(haytam);
        
    // }
    // system("leaks Interface");
    return 0;
}