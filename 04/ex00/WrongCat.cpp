
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void) {
  setType("WrongCat");
  std::cout << "Default constructor WrongCat" << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) {
  std::cout << "Copy constructor WrongAnimal" << std::endl;
  *this = other;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  std::cout << "Copy assignment overload WrongCat" << std::endl;
  setType(rhs.getType());
  return (*this);
}

// Default destructor
WrongCat::~WrongCat(void) {
  std::cout << "destructor WrongCat" << std::endl;
}

void  WrongCat::makeSound(void) const {
  std::cout << "make a weird cat noise" << std::endl;
}