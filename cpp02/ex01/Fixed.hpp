//
// Created by Mehmet eren Akbulut on 26.11.2022.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP
#include <iostream>

class Fixed {
private:
    int _fixedPoint;
    static const int _fractorial = 8;
public:
    Fixed(void);
	Fixed(int const val);
	Fixed(const float val);
    Fixed(const Fixed& other);
    ~Fixed(void);

    Fixed&  operator=(const Fixed& rhs);

    int     getRawBits(void) const;
    void    setRawBits(int _fixedPoint);

    float	toFloat( void ) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);


#endif //CPP_MODULE_FIXED_HPP
