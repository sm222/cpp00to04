
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Class declaration
class Fixed {
 public:
  Fixed(void);
  Fixed(int const raw);
  Fixed(float const raw);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed(void);
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
