//
// Created by Mehmet eren Akbulut on 26.11.2022.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP


class Fixed {
private:
    int _fixedPoint;
    static const int _fractorial;
public:
    Fixed(void);
    Fixed(Fixed& other);
    ~Fixed();

    Fixed&  operator<<(Fixed& other);
    int     getRawBits(void);
    void    setRawBits(int _fixedPoint);
    float toFloat( void ) const;
};


#endif //CPP_MODULE_FIXED_HPP
