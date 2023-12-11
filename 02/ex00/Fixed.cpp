
#include "Fixed.hpp"
static void debugFt(std::string msg) {
  std::cout << msg << std::endl;
}

const int Fixed::_poin = 8;

Fixed::Fixed(void) : _raw_bits(0) {
  debugFt("Default constructor called");
}

Fixed::Fixed(const Fixed &other) {
  debugFt("Copy constructor called");
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
  debugFt("Copy assignment operator called");
  this->_raw_bits = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  debugFt("getRawBits member function called");
  return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw) {
  debugFt("setRawBits member function called");
  this->_raw_bits = raw;
}

Fixed::~Fixed(void) {
  debugFt("Destructor called");
}