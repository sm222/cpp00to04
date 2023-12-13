
#include "Cat.hpp"
#include "Animal.hpp"

// Default constructor
Cat::Cat() : Animal() {
  setType("Cat");
}

// Copy constructor
Cat::Cat(const Cat &other) {
  *this = other;
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Cat::~Cat() {

}
