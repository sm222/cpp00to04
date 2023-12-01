
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Class declaration
class Fixed {
 public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
 private:
  int              _rawBits;
  static const int _poin;
};

#endif // FIXED_HPP_
