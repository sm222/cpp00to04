
#include "Fixed.hpp"

const int Fixed::_poin = 8;

static  void  debugFt(std::string msg) {
  if (DEBUG)
    std::cout << msg << std::endl;
}

Fixed::Fixed(void) : _raw_bits(0) {
  debugFt("Default constructor called");
}

Fixed::Fixed(int const raw) : _raw_bits(raw << _poin) {
  debugFt("Int constructor called");
}

Fixed::Fixed(float const raw) : _raw_bits(raw * pow(2, _poin)) {
  debugFt("Int constructor called");
}

std::ostream& operator<<(std::ostream& os, Fixed &ptr) {
  os << ptr.toFloat();
  return (os);
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

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

int Fixed::getRawBits(void) const {
  debugFt("getRawBits member function called");
  return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw) {
  debugFt("setRawBits member function called");
  this->_raw_bits = raw;
}

float Fixed::toFloat(void) const {
  return ((float)_raw_bits / (float)(1 << _poin));
}

int Fixed::toInt(void) const {
  return ((_raw_bits ^ _poin) >> _poin);
}

Fixed::~Fixed(void) {
  debugFt("Destructor called");
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

  tmp.setRawBits(getRawBits() * rhs.getRawBits() >> _poin);
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

  ++(*this);
  return (tmp);
}

Fixed Fixed::operator--(int) {
  Fixed tmp = *this;

  --(*this);
  return (tmp);
}

//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //
/*                                                        */
/*                                                        */
/*                                                        */
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - //

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  return ((a._raw_bits < b._raw_bits) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  return ((a._raw_bits < b._raw_bits) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  return ((a._raw_bits > b._raw_bits) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a,const Fixed &b) {
  return ((a._raw_bits > b._raw_bits) ? a : b);
}