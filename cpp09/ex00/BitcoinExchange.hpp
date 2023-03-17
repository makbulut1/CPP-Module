//
// Created by Mehmet eren Akbulut on 3/15/23.
//

#ifndef CPP_MODULE_BITCOINEXCHANGE_HPP
#define CPP_MODULE_BITCOINEXCHANGE_HPP

#include "map"
#include "iostream"
#include "exception"
#include "fstream"

class BitcoinExchange{
public:
    BitcoinExchange(int ac, char **av);
    ~BitcoinExchange();
    std::string getKeyAtIndex (int index);
    float getValueAtIndex(int index);
    BitcoinExchange(BitcoinExchange &obj);
    BitcoinExchange& operator=(BitcoinExchange& obj);
private:
    BitcoinExchange();
    std::string                             _date;
    std::string                             _dateIn;
    std::string                             _coinIn;
    std::string                             _coinL;
    std::map<std::string, float>::iterator  it;
    float                                   coin;
    size_t                                  n;
    std::map<std::string,float>             _data;
};


#endif //CPP_MODULE_BITCOINEXCHANGE_HPP
