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

        bool operator<(const Fixed &fixed) const;
        bool operator>(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed &operator++();
        Fixed operator++(int n);
        Fixed &operator--();
        Fixed operator--(int n);

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a,const Fixed &b);
        static const Fixed &min(const Fixed &a,const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif