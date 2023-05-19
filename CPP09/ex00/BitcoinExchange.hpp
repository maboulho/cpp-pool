#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>


class BitcoinExchange
{
    private :
        std::map<std::string, float>   _map;
    public :
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &to_copy);
        BitcoinExchange &operator=(BitcoinExchange const &to_copy);

        void    fill_map();
        void    check_file(std::string file);
        void    parse_file(std::string file);
        int     isValid(std::string s);
        void    btc(std::string input);
};
#endif