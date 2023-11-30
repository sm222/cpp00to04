#include "Zombie.hpp"

Zombie::Zombie (std::string name) {
  this->name = name;
  std::cout << "a new zombie get up is grave, is name " << this->name << std::endl;
};

Zombie::~Zombie (void) {
  std::cout << this->name << " die!" << std::endl;
};

void Zombie::annouce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};