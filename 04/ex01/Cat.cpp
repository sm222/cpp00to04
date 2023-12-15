
#include "Cat.hpp"

// Default constructor
Cat::Cat() {
  std::cout << "Default constructor for cat" << std::endl;
  this->_brain = new Brain();
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
  delete this->_brain;
  std::cout << "destructor cat" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "miaou" << std::endl;
}

//TODO: add to next number
/*
? void Cat::setIdeaCat(const std::string idea, unsigned int i) {
?  this->_brain->setIdea(idea, i);
? }
? 
? std::string Cat::getIdeaCat(unsigned int i) const {
?   return(this->_brain->getIdea(i));
? }
*/
