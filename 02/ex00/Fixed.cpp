
#include "Fixed.hpp"

const int Fixed::_poin = 8;

Fixed::Fixed(void) : _raw_bits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_raw_bits = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_raw_bits = raw;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}