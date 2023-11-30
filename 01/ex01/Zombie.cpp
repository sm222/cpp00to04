#include "Zombie.hpp"

Zombie::Zombie(void) {
  std::cout << "making a zombie" << std::endl;
}

void  Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
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