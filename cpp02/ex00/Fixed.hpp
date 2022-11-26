//
// Created by Mehmet eren Akbulut on 26.11.2022.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP


class Fixed {
private:
    int _fixedPoint;
    static const int _fractional = 8;
public:
    Fixed(void);
    Fixed(Fixed& other);
    ~Fixed(void);

    Fixed& operator=(Fixed& other);
    int getRawBits(void);
    void    setRawBits(int _fixedPoint);
};


#endif //CPP_MODULE_FIXED_HPP
