/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:06:28 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/17 03:32:37 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    PmergeMe::sorting(int ac,char **av)
{
    fill_vector(av,ac);
   fill_deque(av,ac);
    clock_t v_start, dq_start;
    clock_t v_end, dq_end;
    double  v_time, dq_time;

    std::cout << "before: ";
    print_deque();
    std::cout << std::endl;
    std::cout << "before: ";
    print_vector();
    std::cout << std::endl;

    v_start = clock();
    Merge_Insert_Vector(0, _v.size() - 1);
    v_end = clock();

    dq_start = clock();
    Merge_Insert_Deque(0, _d.size() - 1);
    dq_end = clock();

    std::cout << "after: ";
    print_deque();
    std::cout << std::endl;
    std::cout << "after: ";
    print_vector();
    std::cout << std::endl;

    v_time = (double)(v_end - v_start) / CLOCKS_PER_SEC ;
    dq_time = (double)(dq_end - dq_start) / CLOCKS_PER_SEC ;

    std::cout << "Time to process a range of " << _v.size()
        << " elements with std::vector : " << std::fixed << v_time << " us\n";
    std::cout << "Time to process a range of " << _d.size()
        << " elements with std::deque : " << dq_time << " us\n";
}
int main(int ac,char **av)
{
    PmergeMe    p;
    if (ac < 2)
        std::cerr << "Error: invalid input" << std::endl,exit(0);
    p.sorting(ac,av);
    return (0);
}