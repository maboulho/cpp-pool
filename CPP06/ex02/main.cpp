/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:02:37 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/10 21:30:07 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


    Base* generate() {
    srand(time(nullptr));
    int random = rand() % 3;
    if (random == 0) {
        return new A();
    } else if (random == 1) {
        return new B();
    } else {
        return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A\n";
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B\n";
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C\n";
    }
}

void identify(Base& p) {

try{
     A &a = dynamic_cast<A&>(p);
        std::cout << "A\n";
        (void)a;
        }
        catch(const std::exception& e){}
        try
        {
            B &b = dynamic_cast<B&>(p);
            std::cout << "B\n";
            (void)b;
        }
        catch(const std::exception& e){}
        try
        {
            C &c = dynamic_cast<C&>(p);
            std::cout << "C\n";
            (void)c;
        }
        catch(const std::exception& e){}
    
}
int main() {
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}

