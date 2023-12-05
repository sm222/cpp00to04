
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

// Class declaration
class Fixed {
 public:
  // * construction * //
  Fixed(void);
  Fixed(int const raw);
  Fixed(float const raw);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed(void);
  //  * comparaison * //
  bool operator>(const Fixed &rhs) const;
  bool operator<(const Fixed &rhs) const;
  bool operator>=(const Fixed &rhs) const;
  bool operator<=(const Fixed &rhs) const;
  bool operator==(const Fixed &rhs) const;
  bool operator!=(const Fixed &rhs) const;
  //
  Fixed operator+(const Fixed &rhs) const;
  Fixed operator-(const Fixed &rhs) const;
  Fixed operator*(const Fixed &rhs) const;
  Fixed operator/(const Fixed &rhs) const;
  /*                  */
  Fixed &operator++(void);
  Fixed &operator--(void);
  Fixed &operator++(int);
  Fixed &operator--(int);

  //  * set and get * //
  float toFloat(void) const;
  int toInt(void) const;
  int getRawBits(void) const;
  void setRawBits(int const raw);
  //  * * * * //
  
 private:
  int              _raw_bits;
  static const int _poin;
};

std::ostream& operator<<(std::ostream &os,const Fixed &ptr);


#endif // FIXED_HPP_
