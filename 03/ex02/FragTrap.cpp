
#include "FragTrap.hpp"

static void debugFt(std::string msg) {
  std::cout << msg << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  debugFt("making a FragTrap " + name);
  setHit(100);
  setEnergy(100);
  setAttack(30);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName()) {
  debugFt("FragTrap " + getName() + " make with copy");
  *this = other;
}


FragTrap::~FragTrap(void) {
  debugFt("FragTrap " + getName() + " Destructor called ");
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  debugFt("FragTrap was" + getName() + "  die");
  this->_energy = rhs.getEnergy();
  this->_attack= rhs.getAttack();
  this->_name = rhs.getName();
  this->_hit = rhs.getHit();
  return (*this);
}

void FragTrap::attack(const std::string &target) {
  std::cout << "FragTrap " << getName() << " is attacking " << target << " for " << getAttack() << std::endl;
}