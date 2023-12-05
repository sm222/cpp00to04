

#include "Fixed.hpp"
#include <iostream>


int main( void ) {
  Fixed a(2);
  Fixed const b( 1234 );
  Fixed const c( 42.42f );
  Fixed d;

  d = c / a;
  std::cout << d << std::endl;
  ++d;
  std::cout << d << std::endl;
  std::cout << d << std::endl;
}