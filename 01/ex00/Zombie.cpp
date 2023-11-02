#include "Zombie.hpp"

Zombie::Zombie (std::string name) {
  this->name = name;
};

Zombie::~Zombie (void) {
  std::cout << this->name << " die!" << std::endl;
};

void Zombie::annouce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};