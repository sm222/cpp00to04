
#include "Cat.hpp"
#include "Animal.hpp"

// Default constructor
Cat::Cat() {
  std::cout << "Default constructor for cat" << std::endl;
  setType("Cat");
}

// Copy constructor
Cat::Cat(const Cat &other) {
  std::cout << "Copy constructor for cat" << std::endl;
  *this = other;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "Copy assignment overload for cat" << std::endl;
  setType(rhs.getType());
  return (*this);
}

// Default destructor
Cat::~Cat() {
  std::cout << "destructor cat" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "miaou" << std::endl;
}