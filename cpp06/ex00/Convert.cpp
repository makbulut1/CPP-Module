//
// Created by Mehmet eren Akbulut on 12/14/22.
//

#include "Convert.hpp"


Convert::Convert(const std::string& _string) {
    if (_string.empty())
        throw Convert::Invalid();
    if (1 == _string.size()){
        if (isdigit(_string.front()))
        {
            this->_int = static_cast<int>(strtol(_string.c_str(), NULL, 10));
            this->_type = intType;
        }
        else
        {
            this->_char = _string.front();
            this->_type = charType;
        }
    }
    else{
        char *longRest;
        long longPart = strtol(_string.c_str(), &longRest, 10);
        char *doubleRest;
        double doublePart = strtof(_string.c_str(), &doubleRest);

        if (*longRest)
        {
            if (*doubleRest)
            {
                if (*doubleRest == 'f')
                {
                    this->_float = static_cast<float>(doublePart);
                    this->_type = floatType;
                }
                else
                    throw Convert::Invalid();
            }
            else
            {
                this->_double = doublePart;
                this->_type = doubleType;
            }
        }
        else
        {
            if (longPart > std::numeric_limits<int>::max() || longPart < std::numeric_limits<int>::min())
                throw Convert::Invalid();
            else
            {
                this->_int = static_cast<int>(longPart);
                this->_type = intType;
            }
        }
    }
}

Convert::~Convert() {
    return;
}

char Convert::toChar() const
{
    switch (this->_type)
    {
        char c;
        case charType:
            return this->_char;
        case intType:
            c = static_cast<char>(this->_int);
            if (!isprint(c))
                throw Convert::NonDisplay();
            else
                return c;
        case floatType:
            c = static_cast<char>(this->_float);
            if (isnan(this->_float) || isinf(this->_float)
                || this->_float > std::numeric_limits<char>::max() || this->_float < std::numeric_limits<char>::min())
                throw Convert::impossible();
            else if (!isprint(c))
                throw Convert::NonDisplay();
            else
                return c;
        case doubleType:
            c = static_cast<char>(this->_double);
            if (isnan(this->_double) || isinf(this->_double)
                || this->_double > std::numeric_limits<char>::max() || this->_double < std::numeric_limits<char>::min())
                throw Convert::impossible();
            else if (!isprint(c))
                throw Convert::NonDisplay();
            else
                return c;
        default:
            break;
    }
}

int Convert::toInt() const
{
    switch (this->_type)
    {
        case charType:
            return static_cast<int>(this->_char);
        case intType:
            return this->_int;
        case floatType:
            if (isnan(this->_float) || isinf(this->_float)
                || this->_float > std::numeric_limits<int>::max() || this->_float < std::numeric_limits<int>::min())
                throw Convert::impossible();
            else
                return static_cast<int>(this->_float);
        case doubleType:
            if (isnan(this->_double) || isinf(this->_double)
                || this->_double > std::numeric_limits<int>::max() || this->_double < std::numeric_limits<int>::min())
                throw Convert::impossible();
            else
                return static_cast<int>(this->_double);
        default:
            break;
    }
}

float Convert::toFloat() const
{
    switch (this->_type)
    {
        case charType:
            return static_cast<float>(this->_char);
        case intType:
            return static_cast<float>(this->_int);
        case floatType:
            return this->_float;
        case doubleType:
            return static_cast<float>(this->_double);
        default:
            break;
    }
}

double Convert::toDouble() const
{
    switch (this->_type)
    {
        case charType:
            return static_cast<double>(this->_char);
        case intType:
            return static_cast<double>(this->_int);
        case floatType:
            return static_cast<double>(this->_float);
        case doubleType:
            return this->_double;
        default:
            break;
    }
}

std::ostream& operator<<(std::ostream& o, const Convert& rhs)
{
    o << "char: ";
    try
    {
        char c;
        c = rhs.toChar();
        o << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        o << e.what() << std::endl;
    }
    o << "int: ";
    try
    {
        int i;
        i = rhs.toInt();
        o << i << std::endl;
    }
    catch(const std::exception& e)
    {
        o << e.what() << std::endl;
    }
    o << "float: ";
    try
    {
        float f;
        f = rhs.toFloat();
        double intPart;
        if (modf(f, &intPart) == 0)
            o.precision(1);
        o << std::fixed << f << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        o << e.what() << std::endl;
    }
    o << "double: ";
    try
    {
        double d;
        d = rhs.toDouble();
        double intPart;
        if (modf(d, &intPart) == 0)
            o.precision(1);
        o << std::fixed << d << std::endl;
    }
    catch(const std::exception& e)
    {
        o << e.what() << std::endl;
    }
    return o;
}