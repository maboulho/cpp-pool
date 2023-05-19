/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:39:18 by maboulho          #+#    #+#             */
/*   Updated: 2023/05/17 03:34:38 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void rightTrim(std::string& s)
{
    size_t pos = s.find_last_not_of(" ");
    if (pos != std::string::npos) {
        s.erase(pos + 1);
    }
}

static void leftTrim(std::string& s)
{
    size_t pos = s.find_first_not_of(" ");
    if (pos != std::string::npos) {
        s.erase(0, pos);
    } 
    else
        s.clear();
}
BitcoinExchange::BitcoinExchange()
{
    return ;
}

BitcoinExchange::~BitcoinExchange()
{
    return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &to_copy)
{
    *this = to_copy;
    return ;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &to_copy)
{
    if (this != &to_copy)
    {
        this->_map = to_copy._map;
    }
    return (*this);
}

int     BitcoinExchange::isValid(std::string s)
{
    if ( s[4] != '-' || s[7] != '-') {
        return 0;
    }
     int year = std::stoi(s.substr(0, 4));
    int month = std::stoi(s.substr(5, 2));
    int day = std::stoi(s.substr(8, 2));
    if (year < 1900 || year > 2100 || month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;
    }
    return 1;
}

void   BitcoinExchange::fill_map()
{
    std::ifstream   file("./data.csv");
    if(!file.is_open())
    {
        std::cout << "Error: file does not exist." << std::endl;
        exit(0);
    }
    std::string     line;
    while ( std::getline(file, line) && !file.eof())
    {
        std::stringstream ss(line);
        std::string dateStr;
        std::string floatStr;

        if (std::getline(ss, dateStr, ',') && std::getline(ss, floatStr, ','))
        {
             float value = std::atof(floatStr.c_str());
            _map.insert(std::make_pair(dateStr, value));
            }
    }
    file.close();
}

void    BitcoinExchange::btc(std::string input)
{
    std::string line;
    std::ifstream   file(input);
    
    getline(file, line);
    while (getline(file , line) && !file.eof())
    {
        if(!file.is_open())
    {
        std::cerr << "Error: file does not exist." << std::endl;
        exit(0);
    }

        size_t pos = line.find("|");
        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 1);
        if(date[date.length()] == ' ')
        {
            std::cerr << "missing space\n";
            continue; 
        }
        leftTrim(value);
        rightTrim(date);
         size_t pos1 = value.find(",");
         if(pos1 == 1)
             value.replace(pos1, 1, ".");
         float v = std::atof(value.c_str());
        if (v > 1000 && isValid(date))
        {
            v = -1;
            std::cout << "Error: too large a number. " << std::endl;
        }
        else
        {
            std::map<std::string, float>::const_iterator it = _map.lower_bound(date);
            if(date != it->first && it != _map.begin())
                --it;
            if(!isValid(date))
            {
                std::cout << "Error: bad input => " << date << std::endl;
                continue;  
            }
            std::ostringstream ss;
            ss << v;
            std::string myString = ss.str();
            if( myString != value)
            {
                std::cout << "Error: bad input => " << date <<std::endl;
                continue; 
            }
            if(v < 0)
                std::cout << "Error: not a positive number." << std::endl;
            else
                std::cout << date << " => " << v << " = "<< v * it->second << std::endl;
        }
    }
    file.close();
}
