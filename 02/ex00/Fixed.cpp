
#include "Fixed.hpp"

const int Fixed::_poin = 8;

Fixed::Fixed(void) {
  std::cout << "Default constructor called" << std::endl;
  this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_rawBits = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_rawBits = raw;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}