#include "Animal.hpp"

Animal::Animal(void) {
  std::cout << "Constructor animal call" << std::endl;
  setType("none");
}

Animal::Animal(const Animal &other) {
  std::cout << "copy Constructor animal call" << std::endl;
  *this = other;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "equal Constructor animal call" << std::endl;
  setType(rhs._type);
  return (*this);
}

Animal::~Animal(void) {
  std::cout << "Destructor animal call" << std::endl;
}

void  Animal::setType(const std::string type) {
  this->_type = type;
}

std::string Animal::getType(void) const{
  return (this->_type);
}

void  Animal::makeSound(void) {
  if (getType() == "Cat")
    std::cout << "miou" << std::endl;
  else if (getType() == "Dog")
    std::cout << "waf" << std::endl;
  else
    std::cout << "this not human..." << std::endl;
}
