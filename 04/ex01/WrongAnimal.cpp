
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void) {
  std::cout << "Default constructor WrongAnimal" << std::endl;
  setType("WrongAnimal");
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "Copy constructor WrongAnimal" << std::endl;
  *this = other;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout << "Copy assignment overload WrongAnimal" << std::endl;
  (void)rhs;
  return *this;
}

// Default destructor
WrongAnimal::~WrongAnimal(void) {
  std::cout << "destructor WrongAnimal" << std::endl;
}

void  WrongAnimal::makeSound(void) const {
  std::cout << "make a weird noise" << std::endl;
}

void  WrongAnimal::setType(const std::string type) {
  this->_type = type;
}

std::string WrongAnimal::getType(void) {
  return (this->_type);
}