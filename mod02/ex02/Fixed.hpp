#ifndef _FIXED_HPP
#define _FIXED_HPP

// Include Headers
#include <iostream>

class Fixed
{
private:
    int _fixed;
    static const int _fractBits = 8;

public:
    Fixed(void); // Default constructor
    Fixed(const Fixed &); // Copy constructor
    ~Fixed(void); // Destructor
    Fixed& operator=(const Fixed &); // Copy assignment operator
    Fixed(const int);
    Fixed(const float);

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const;
    void setRawBits( int const raw ); 

    // Arithmetic Operators
    Fixed operator+(const Fixed&) const;
    Fixed operator-(const Fixed&) const;
    Fixed operator*(const Fixed&) const;
    Fixed operator/(const Fixed&) const;

    // Comparison Operators
    bool operator==(const Fixed&) const;
    bool operator!=(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator>(const Fixed&) const;
    bool operator<(const Fixed&) const;
    Fixed   operator++(); // ++Fixed
    Fixed   operator++(int); // Fixed++
    Fixed   operator--(); // --Fixed
    Fixed   operator--(int); // Fixed--

    static float   min(const Fixed& first, const Fixed& second);
    static float   max(const Fixed& first, const Fixed& second);
};

std::ostream &operator<<(std::ostream&, const Fixed&);
#endif