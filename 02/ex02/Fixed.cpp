
#include "Fixed.hpp"

const int Fixed::_poin = 8;

Fixed::Fixed(void) : _raw_bits(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw) : _raw_bits(raw << _poin) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const raw) : _raw_bits(raw * pow(2, _poin)) {
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

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_raw_bits = raw;
}

float Fixed::toFloat(void) const {
  return ((float)_raw_bits / (float)(1 << _poin));
}

int Fixed::toInt(void) const {
  return ((_raw_bits ^ _poin) >> _poin);
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Fixed &ptr) {
  os << ptr.toFloat();
  return (os);
}

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

bool Fixed::operator>(const Fixed &rhs) const {
  bool result;
  (getRawBits() > rhs.getRawBits()) ? result = true :result = false;
  return (result);
}


bool Fixed::operator<(const Fixed &rhs) const {
  bool result;
  (getRawBits() > rhs.getRawBits()) ? result = false :result = true;
  return (result);
}

bool Fixed::operator>=(const Fixed &rhs) const {
  bool result;
  (getRawBits() >= rhs.getRawBits()) ? result = true :result = false;
  return (result);
}

bool Fixed::operator<=(const Fixed &rhs) const {
  bool result;
  (getRawBits() <= rhs.getRawBits()) ? result = true :result = false;
  return (result);
}

bool Fixed::operator==(const Fixed &rhs) const {
  bool result;
  (getRawBits() == rhs.getRawBits()) ? result = true :result = false;
  return (result);
}

bool Fixed::operator!=(const Fixed &rhs) const {
  bool result;
  (getRawBits() != rhs.getRawBits()) ? result = true :result = false;
  return (result);
}

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

Fixed Fixed::operator+(const Fixed &rhs) const {
  Fixed tmp;

  tmp.setRawBits(getRawBits() + rhs.getRawBits());
  return (tmp);
}

Fixed Fixed::operator-(const Fixed &rhs) const {
  Fixed tmp;

  tmp.setRawBits(getRawBits() - rhs.getRawBits());
  return (tmp);
}

Fixed Fixed::operator*(const Fixed &rhs) const {
  Fixed tmp;

  tmp.setRawBits(getRawBits() * rhs.getRawBits());
  return (tmp);
}

Fixed Fixed::operator/(const Fixed &rhs) const {
  Fixed tmp;

  tmp.setRawBits((getRawBits() << _poin)/ rhs.getRawBits());
  return (tmp);
}

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

Fixed &Fixed::operator++(void) {
  _raw_bits++;
  return (*this);
}

Fixed &Fixed::operator--(void) {
  _raw_bits--;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed tmp = *this;

  (*this)++;
  return (tmp);
}

Fixed Fixed::operator--(int) {
  Fixed tmp = *this;

  (*this)--;
  return (tmp);
}

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

static Fixed &min(Fixed &a, Fixed &b) {
  return ((a < b) ? a : b);
}

  static const Fixed &min(const Fixed &a, const Fixed &b) {
  return ((a < b) ? a : b);
}

static Fixed &max(Fixed &a, Fixed &b) {
  return ((a > b) ? a : b);
}

static const Fixed &max(const Fixed &a,const Fixed &b) {
  return ((a > b) ? a : b);
}