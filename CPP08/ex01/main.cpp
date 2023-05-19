/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 00:32:36 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/13 02:37:30 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(-2147483648);
sp.addNumber(2147483647);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

Span sp2 = Span(10000);
std::vector<int> v(10000, 0);
for (int i = 0; i < 10000; i++)
    v[i] = i;
sp2.addNumber(v.begin(), v.end());
std::cout << sp2.shortestSpan() << std::endl;
std::cout << sp2.longestSpan() << std::endl;

return 0;
}
