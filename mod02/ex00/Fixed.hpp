#include <iostream>

class Fixed
{
private:
    int _int_fixed;
    static const int _fractional;

private:
    void operator=(Fixed &other);

public:
    Fixed(void);
    ~Fixed(void);
    Fixed(Fixed &);
    int getRawBits(void) const;
    void setRawBits( int const raw ); 
};