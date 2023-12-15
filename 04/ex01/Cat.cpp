
#include "Cat.hpp"

// Default constructor
Cat::Cat() {
  std::cout << "Default constructor for cat" << std::endl;
  this->brain = new Brain();
  setType("Cat");
}

// Copy constructor
Cat::Cat(const Cat &other) {
  std::cout << "Copy constructor for cat" << std::endl;
  *this = other;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  setType(rhs.getType());
  std::cout << "Copy assignment overload for cat" << std::endl;
  return (*this);
}

// Default destructor
Cat::~Cat() {
  delete this->brain;
  std::cout << "destructor cat" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "miaou" << std::endl;
}
