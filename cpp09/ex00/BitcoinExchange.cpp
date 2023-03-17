//
// Created by Mehmet eren Akbulut on 3/15/23.
//

#include "BitcoinExchange.hpp"

std::string BitcoinExchange::getKeyAtIndex (int index){
    std::map<std::string, float>::iterator end = this->_data.end();

    int counter = 0;
    for (std::map<std::string, float>::iterator it = this->_data.begin(); it != this->_data.end(); ++it) {
        if (counter == index)
            return it->first;
        counter++;
    }
    return (0);
}

float BitcoinExchange::getValueAtIndex(int index){
    std::map<std::string, float>::iterator end = this->_data.end();

    int counter = 0;
    for (std::map<std::string, float>::iterator it = this->_data.begin(); it != this->_data.end(); ++it) {
        if (counter == index)
            return it->second;
        counter++;
    }
    return (0);
}

BitcoinExchange::BitcoinExchange(int ac, char **av){
    if (ac == 2){
        std::ifstream   a("data.csv");
        std::ifstream   in(av[1]);

        if(!in.good()){
            std::cerr  << av[1] << " file error" <<  std::endl;
            exit(1);
        }
        std::getline(a, _date);
        std::getline(in, _dateIn);
        n = _date.find(',');
        if (n > _date.length()){
            std::cerr << "data.csv file error" << std::endl;
            exit(1);
        }
        _date.erase(n);
        if ("_date" == _date)
        {
            for(int i = 0; std::getline(a, _date); i++) {
                _coinL = _date;
                n = _date.find(',');
                if (n > _date.length()) {
                    _date.find(',');
                    std::cerr << "data.csv file error" << std::endl;
                    exit(1);
                }
                _date.erase(n);
                n = _coinL.find(',');
                if (n > _coinL.length())
                {
                    std::cerr << "data.csv file error" << std::endl;
                    exit(1);
                }
                _coinL.erase(0, n + 1);
                coin = stof(_coinL);
                this->_data[_date] = coin;
            }
            label:
            while (std::getline(in, _dateIn)){
                _coinIn = _dateIn;
                n = _coinIn.find('|');
                if (n > _coinIn.length())
                {
                    std::cerr << "Error: bad input => " << _coinIn << std::endl;
                    std::getline(in, _dateIn);
                    _coinIn = _dateIn;
                    n = _coinIn.find('|');
                    n = _dateIn.find('|');
                }
                if (n > _dateIn.length())
                {
                    std::cerr << "Error: bad input => " << _coinIn << std::endl;
                    goto label;
                }
                n = _dateIn.find(' ');
                if (n > _dateIn.length())
                {
                    std::cerr << "Error: bad input => " << _coinIn << std::endl;
                    goto label;
                }
                _dateIn.erase(n);
                _dateIn.erase(n);
                _coinIn.erase(0, n + 1);
                n = _coinIn.find(' ');
                if (n > _coinIn.length())
                {
                    std::cerr << "Error: bad input => " << _coinIn << std::endl;
                    goto label;
                }
                _coinIn.erase(0, n + 1);
                if (stof(_coinIn) < 1) {
                    std::cerr << "Error: not a positive number." << std::endl;
                    goto label;
                }
                if (_coinIn == "2147483648" ){
                    std::cerr << "Error: too large a number." << std::endl;
                    goto label;
                }
                it = this->_data.upper_bound(_dateIn);
                it--;
                std::cout << _dateIn << " => " << _coinIn << " = "<< it->second * std::stof(_coinIn) << std::endl;
            }
        }
        else if ("exchange_rate" == _date)
        {
            std::cout << _date << std::endl;
        }
        else{
            std::cout <<  "',' in the wrong place or the file is incorrect " << std::endl;
            std::cout <<  "file example\n" << "------------\n"<<"_date,exchange_rate\n"<<"2009-01-02,0\n"<<"2009-01-05,0\n"<<"2009-01-08,0" << std::endl;

        }
    }
    else
        std::cerr << "Error: could not open file."<< std::endl;
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& obj){
    _data = obj._data;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& obj){
    this->_data = obj._data;
    return *this;
}