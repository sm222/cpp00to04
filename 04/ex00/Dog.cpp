
#include "Dog.hpp"
#include "Animal.hpp"

// Default constructor
Dog::Dog() {
  std::cout << "Default constructor for dog" << std::endl;
  setType("Dog");
}

// Copy constructor
Dog::Dog(const Dog &other) {
  std::cout << "Copy constructor for dog" << std::endl;
  *this = other;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
  this->setType(rhs.getType());
  std::cout << "Copy assignment overload for dog" << std::endl;
  return (*this);
}

// Default destructor
Dog::~Dog() {
  std::cout << "Destructor dog" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "woof" << std::endl;
}
