
#include "Cat.hpp"

// Default constructor
Cat::Cat() {
  std::cout << "Default constructor for cat" << std::endl;
  this->setType("Cat");
  this->_brain = new Brain;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal("Cat") , _brain(new Brain(*other._brain)) {
  std::cout << "Copy constructor for cat" << std::endl;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  this->setType(rhs.getType());
  this->_brain = rhs._brain;
  std::cout << "Copy assignment overload for cat" << std::endl;
  return (*this);
}

// Default destructor
Cat::~Cat() {
  delete this->_brain;
  std::cout << "destructor cat" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "miaou" << std::endl;
}

void Cat::setBrain(const std::string val, unsigned int i) {
  this->_brain->setIdea(val, i);
}

std::string Cat::getBrain(unsigned int i) const{
  return (this->_brain->getIdea(i));
}