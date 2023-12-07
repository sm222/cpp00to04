

#include "Fixed.hpp"
#include <iostream>
/*


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
*/

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}