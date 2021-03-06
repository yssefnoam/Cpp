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
    int getRawBits(void) const;
    void setRawBits( int const raw ); 
};

#endif