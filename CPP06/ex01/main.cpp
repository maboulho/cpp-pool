/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:43:49 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/10 16:48:19 by maboulho         ###   ########.fr       */
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
int	main()
{
	Data		*ptr;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr = new Data;
	ptr->data = "Dummy Data!";

	raw = serialize(ptr);
	new_ptr = deserialize(raw);

	std::cout << "Data of ptr: " << ptr->data << std::endl;
	std::cout << "Data of new_ptr: " << new_ptr->data << std::endl;

	delete ptr;
}