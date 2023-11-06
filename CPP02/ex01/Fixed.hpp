#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include "cmath"

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &object);
        Fixed(const int number_value);
        Fixed(const float number_value);
        ~Fixed();
        Fixed &operator = (const Fixed &object);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif