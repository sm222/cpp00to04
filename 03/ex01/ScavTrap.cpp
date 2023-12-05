
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "ScavTrap " << getName() << " was born" << std::endl;
  setHit(100);
  setEnergy(50);
  setAttack(20);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << getName() << " just died" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.getName()) {
  *this = other;
}


