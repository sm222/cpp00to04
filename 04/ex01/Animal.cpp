#include "Animal.hpp"

Animal::Animal(void) {
  std::cout << "Constructor animal call" << std::endl;
  setType("Animal");
}

Animal::Animal(const Animal &other) {
  std::cout << "copy Constructor animal call" << std::endl;
  *this = other;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "equal Constructor animal call" << std::endl;
  this->setType(rhs._type);
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

void  Animal::makeSound(void) const {
    std::cout << "silence ..." << std::endl;
}

void Animal::setBrain(const std::string val, unsigned int i) {
  (void)val;
  (void)i;
  std::cout << "no brain here" << std::endl;
  return ;
}

std::string Animal::getBrain(unsigned int i) const{
  (void)i;
  std::cout << "no brain here" << std::endl;
  return ("");
}