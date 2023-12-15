#include "Animal.hpp"

AAnimal::AAnimal(void) {
  std::cout << "Constructor animal call" << std::endl;
  this->setType("Animal");
}

AAnimal::AAnimal(const AAnimal &other) {
  std::cout << "copy Constructor animal call" << std::endl;
  *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
  std::cout << "equal Constructor animal call" << std::endl;
  this->setType(rhs._type);
  return (*this);
}

AAnimal::~AAnimal(void) {
  std::cout << "Destructor animal call" << std::endl;
}

void  AAnimal::setType(const std::string type) {
  this->_type = type;
}

std::string AAnimal::getType(void) const {
  return (this->_type);
}

void  AAnimal::makeSound(void) const {
    std::cout << "silence ..." << std::endl;
}

void AAnimal::setBrain(const std::string val, unsigned int i) {
  (void)val;
  (void)i;
  std::cout << "no brain here" << std::endl;
  return ;
}

std::string AAnimal::getBrain(unsigned int i) const{
  (void)i;
  std::cout << "no brain here" << std::endl;
  return ("");
}