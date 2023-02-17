#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include<string.h>
#include <iomanip>
class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string Nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    void   setfirstName();
    void   setlastName();
    void   setNickname();
    void   setphoneNumber();
    void   setdarkestSecret();
    
    std::string getfirstName();
    std::string getlastName();
    std::string getNickname();
    std::string getphoneNumber();
    std::string getdarkestSecret();
};

class Phonebook
{
private:
    Contact contact[8];
    int     count;
    int     index;
public:
    void    add();
    void    search();
    Phonebook();
    ~Phonebook();
};

int	isNumeric(std::string str);
int	isAlphaNum(std::string str);

#endif