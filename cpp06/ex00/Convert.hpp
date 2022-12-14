//
// Created by Mehmet eren Akbulut on 12/14/22.
//

#ifndef CPP_MODULE_CONVERT_HPP
#define CPP_MODULE_CONVERT_HPP

#include "iostream"
#include "exception"

class Convert {
    std::string _string;
    enum _types{
        intType,
        floatType,
        charType,
        doubleType
    }_type;
    char        _char;
    int         _int;
    float       _float;
    double      _double;
public:

    Convert(const std::string &other);

    Convert(const Convert& other);

    ~Convert(void);

    int     toInt(void) const;

    float   toFloat(void) const;

    double   toDouble(void) const;

    char    toChar(void) const;

    class impossible : public std::exception{
        const char * what() const throw(){
            return "impossible";
        }
    };

    class NonDisplay : public std::exception{
        const char * what() const throw(){
            return "Non display";
        }
    };

    class Invalid : public std::exception{
        const char * what() const throw(){
            return "Invalid input";
        }
    };

};

std::ostream& operator<<(std::ostream& o, const Convert& other);
#endif //CPP_MODULE_CONVERT_HPP
