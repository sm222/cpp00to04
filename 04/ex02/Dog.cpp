
#include "Dog.hpp"

// Default constructor
Dog::Dog() {
  std::cout << "Default constructor for dog" << std::endl;
  this->setType("Dog");
  this->_brain = new Brain;
}

// Copy constructor
Dog::Dog(const Dog &other) : AAnimal("Dog") , _brain(new Brain(*other._brain)) {
  std::cout << "Copy constructor for dog" << std::endl;
  *this = other;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
  this->setType(rhs.getType());
  this->_brain = rhs._brain;
  std::cout << "Copy assignment overload for dog" << std::endl;
  return (*this);
}

// Default destructor
Dog::~Dog() {
  delete this->_brain;
  std::cout << "Destructor dog" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "woof" << std::endl;
}

void Dog::setBrain(const std::string val, unsigned int i) {
  this->_brain->setIdea(val, i);
}

std::string Dog::getBrain(unsigned int i) const{
  return (this->_brain->getIdea(i));
}