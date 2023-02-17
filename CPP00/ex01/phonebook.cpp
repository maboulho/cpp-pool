/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:59:40 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/18 00:35:15 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void   Contact::setfirstName()
{
	if (!std::cin)
		return ;
	std::cout << "Enter first name : ";
while (getline(std::cin,this->firstName))
	{
		if(this->firstName.empty()) {
			std::cout << "invalid argument\n";
			std::cout << "Enter first name : ";
		}
		else if (!isAlphaNum(this->firstName))
		{
			std::cout << "invalid argument\n";
			std::cout << "Enter first name : ";
		}
		else
			break ;
	}
}
void   Contact::setlastName()
{
	if (!std::cin)
		return ;
	std::cout << "Enter last name : ";
while (getline(std::cin,this->lastName))
	{
		if(this->lastName.empty()) {
			std::cout << "invalid argument\n";
			std::cout << "Enter last name : ";
		}
		else if (!isAlphaNum(this->lastName))
		{
			std::cout << "invalid argument\n";
			std::cout << "Enter last name : ";
		}
		else
			break ;
	}
}
void   Contact::setNickname()
{
	if (!std::cin)
		return ;
	std::cout << "Enter nickname : ";
	while (getline(std::cin,this->Nickname))
	{
		if(this->Nickname.empty()) {
			std::cout << "invalid argument\n";
			std::cout << "Enter nickname : ";
		}
		else if (!isAlphaNum(this->Nickname))
		{
			std::cout << "invalid argument\n";
			std::cout << "Enter nickname : ";
		}
		else
			break ;
	}
}
// check if the input is numeric
void   Contact::setphoneNumber()
{
	if (!std::cin)
		return ;
	std::cout << "Enter phoneNumber : ";
	while (getline(std::cin,this->phoneNumber))
	{
		if(this->phoneNumber.empty() || isNumeric(this->phoneNumber) != 1) {
			std::cout << "invalid argument\n";
			std::cout << "Enter phoneNumber : ";
		}
		else if (!isAlphaNum(this->phoneNumber))
		{
			std::cout << "invalid argument\n";
			std::cout << "Enter phoneNumber : ";
		}
		else
			break ;
	}
}
void   Contact::setdarkestSecret()
{
	if (!std::cin)
		return ;
	std::cout << "Enter darkestSecret : ";
	while (getline(std::cin,this->darkestSecret))
	{
		if(this->darkestSecret.empty()) {
			std::cout << "invalid argument\n";
			std::cout << "Enter darkestSecret : ";
		}
		else if (!isAlphaNum(this->darkestSecret))
		{
			std::cout << "invalid argument\n";
			std::cout << "Enter darkestSecret : ";		
		}
		else
			break ;
	}
}

std::string Contact::getfirstName()
{
	return this->firstName;
}
std::string Contact::getlastName()
{
	return this->lastName;
}
std::string Contact::getNickname()
{
	return	this->Nickname;
}
std::string Contact::getphoneNumber()
{
	return	this->phoneNumber;	
}
std::string Contact::getdarkestSecret()
{
	return	this->darkestSecret;
}

Phonebook::Phonebook()
{
	this->count = 0;
	this->index = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "\nbye" << std::endl;
}

int	isNumeric(std::string str)
{
	int	i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

int	isAlphaNum(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]) && !isalpha(str[i]))
			return 0;
		i++;
	}
	return 1;
}
void	Phonebook::add()
{
	index = index % 8;
	contact[this->index].setfirstName();
	contact[this->index].setlastName();
	contact[this->index].setNickname();
	contact[this->index].setphoneNumber();
	contact[this->index].setdarkestSecret();
	if (!std::cin)
		return ;
	std::cout << "new contact has been added\n";
	index++;
	if (count < 8)
		count++;
	
}
void	Phonebook::search()
{
	std::cout << "_____________________________________________\n" << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|\n---------------------------------------------\n";
	std::string str;
	for (int i = 0; i < this->count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		str = this->contact[i].getfirstName();
		str = (str.length() > 10)? str.substr(0, 9) + "." : str;
		std::cout << "|" << std::setw(10) << str ;
		str = this->contact[i].getlastName();
		str = (str.length() > 10)? str.substr(0, 9) + "." : str;
		std::cout << "|" << std::setw(10) << str ;
		str = this->contact[i].getNickname();
		str = (str.length() > 10)? str.substr(0, 9) + "." : str;
		std::cout << "|" << std::setw(10) << str << "|" << std::endl;
	}
	// input the contact index w qlb elih w checki wach dakhl f range 
	std::string s;
	std::cout << "enter an index for more infos" << std::endl;
	getline(std::cin,s);
	if(s.size() == 0 || std::cin.eof() || isNumeric(s) != 1 || count < stoi(s) || s.empty() || stoi(s) == 0)
		std::cout << "Oopsie no contact has been found\n";
	else
	{
		std::cout << "First name : "<< this->contact[stoi(s) - 1].getfirstName() << std::endl;
		std::cout << "Last name : "<< this->contact[stoi(s) - 1].getlastName() << std::endl;
		std::cout << "Nickname : "<< this->contact[stoi(s) - 1].getNickname() << std::endl;
		std::cout << "PhoneNumber : "<< this->contact[stoi(s) - 1].getphoneNumber() << std::endl;
		std::cout << "darkestSecret : "<< this->contact[stoi(s) - 1].getdarkestSecret() << std::endl;
	}
}