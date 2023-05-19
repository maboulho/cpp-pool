/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:02:01 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/13 02:31:45 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"
#include <vector>
#include <list>
#include <deque>
int main()
{
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    try
    {
        std::cout << *easyfind(v, 1) << std::endl;
        std::cout << *easyfind(l, 3) << std::endl;
        std::cout << *easyfind(d, 3) << std::endl;
        std::cout << *easyfind(v, 3) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}