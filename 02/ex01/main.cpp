

#include "Fixed.hpp"
#include <iostream>


int main( void ) {
  Fixed a;
  Fixed const b( 1234 );
  Fixed const c( 42.42f );
  Fixed const d( b );

  a = Fixed( 1234.4321f );
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "toFloat  a = " << a.toFloat() << std::endl;
  std::cout << "toFloat  b = " << b.toFloat() << std::endl;
  std::cout << "toFloat  c = " << c.toFloat() << std::endl;
  std::cout << "toInt  a = " << a.toInt() << std::endl;
  std::cout << "toInt  b = " << b.toInt() << std::endl;
  std::cout << "toInt  c = " << c.toInt() << std::endl;
}