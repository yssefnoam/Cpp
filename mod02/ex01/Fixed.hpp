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
    // orthodox canonical class form "OCCF"
    // ---- OCCF start ----

    Fixed(void); // Default constructor
    Fixed(const Fixed &); // Copy constructor
    ~Fixed(void); // Destructor
    Fixed& operator=(Fixed &other); // Copy assignment operator

    // ---- OCCF end ----

    Fixed(const int);
    Fixed(const float);
    float   toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits(void) const;
    void setRawBits( int const raw ); 
};

#endif