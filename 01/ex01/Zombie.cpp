#include "Zombie.hpp"

Zombie::Zombie(void) {
  
}

Zombie::Zombie(std::string name): _name(name){
  std::cout << "new zombie :" << this->_name << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "zombie die : " << this->_name << std::endl;
}

void Zombie::setName(std::string name) {
  this->_name = name;
}