
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Class declaration
class Fixed {
 public:
  Fixed(void);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed(void);
  int getRawBits(void) const;
  void setRawBits(int const raw);
 private:
  int              _raw_bits;
  static const int _poin;
};

#endif // FIXED_HPP_
