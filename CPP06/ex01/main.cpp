/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:43:49 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/10 21:50:37 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
int main( void )
{
    Data *data = new Data;

    data->name = "maboulho";
    data->age = 24;

    std::cout << "Name: " << serialize(data) << std::endl;
    std::cout << "Age: " << deserialize( serialize( data ) )->age << std::endl;
	std::cout << "Name: " << deserialize( serialize( data ) )->name << std::endl;
    delete data;

    return 0;
}