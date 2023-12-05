
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

// Class declaration
class Fixed {
 public:
  Fixed();
  Fixed(int const raw);
  Fixed(float const raw);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed();
  //  * * * * //
  bool operator>(const Fixed &rhs) const;
  bool operator<(const Fixed &rhs) const;
  bool operator>=(const Fixed &rhs) const;
  bool operator<=(const Fixed &rhs) const;
  bool operator==(const Fixed &rhs) const;
  bool operator!=(const Fixed &rhs) const;
  //  * * * * //
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
