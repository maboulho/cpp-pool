/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:28:52 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/13 01:55:26 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


void    test_list(){
    std::cout << "Test list" << std::endl;
    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << "last element in the list "<< l.back() << std::endl;
    l.pop_back();
    std::cout << "list size "<<l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);
    
    std::list<int>::iterator it = l.begin();
    std::list<int>::iterator ite = l.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
}
void    test_stack(){
    std::cout << "Test stack" << std::endl;
    MutantStack<int> s;
    s.push(5);
    s.push(17);
    std::cout << "last element in the stack "<< s.top() << std::endl;
    s.pop();
    std::cout << "stack size "<<s.size() << std::endl;
    s.push(3);
    s.push(5);
    s.push(737);
    s.push(0);
    
    MutantStack<int>::iterator it = s.begin();
    MutantStack<int>::iterator ite = s.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
}

int main()
{
    test_list();
    test_stack();
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    // std::cout << *it << std::endl;
    // ++it;
    // }
    // std::stack<int> s(mstack);
    // return 0;   
}