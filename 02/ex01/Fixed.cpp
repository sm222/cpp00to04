
#include "Fixed.hpp"

const int Fixed::_poin = 8;

Fixed::Fixed(void) : _raw_bits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw) : _raw_bits(raw) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw) : _raw_bits(raw) {
  std::cout << "Int constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Fixed &ptr) {
  os << ptr.getRawBits();
  return (os);
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

std::ostream &operator<<(std::ostream &os, const Fixed &ptr) {
  os << ptr.getRawBits();
  return (os);
}