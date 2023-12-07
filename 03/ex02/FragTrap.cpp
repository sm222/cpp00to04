
#include "FragTrap.hpp"

static void debugFt(std::string msg) {
  std::cout << msg << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  setHit(100);
  setEnergy(100);
  setAttack(30);
  debugFt("making a ScavTrap " + name);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName()){
  *this = other;
}


FragTrap::~FragTrap(void) {
  debugFt("FragTrap " + getName() + " jsut die");
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  debugFt("FragTrap was" + getName() + " jsut die");
  this->_energy = rhs.getEnergy();
  this->_attack= rhs.getAttack();
  this->_name = rhs.getName();
  this->_hit = rhs.getHit();
  return (*this);
}