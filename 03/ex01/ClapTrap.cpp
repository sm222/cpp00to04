#include "ClapTrap.hpp"

//*                                                     *//
//*         constructer          Destructor             *//
//*                                                     *//

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0) {
  std::cout << "make a new ClapTrap " << getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
  std::cout << "copy ClapTrap " << _name << std::endl;
  *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  this->_name = rhs.getName();
  this->_hit = rhs.getHit();
  this->_energy = rhs.getEnergy();
  this->_attack = rhs.getAttack();
  std::cout << "operator = " << _name << std::endl;
  return (*this);
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap " << getName() << " Destructor called " << std::endl; 
}

//*                                                     *//
//*         set                         get             *//
//*                                                     *//

void  ClapTrap::setName(std::string &name) {
  this->_name = name;
}

std::string ClapTrap::getName(void) const {
  return (this->_name);
}

void  ClapTrap::setHit(unsigned int hit) {
  this->_hit = hit;
}

unsigned int  ClapTrap::getHit(void) const {
  return (this->_hit);
}

void  ClapTrap::setEnergy(unsigned int energy) {
  this->_energy = energy;
}

unsigned int  ClapTrap::getEnergy(void) const {
  return (this->_energy);
}

void  ClapTrap::setAttack(unsigned int attack) {
  this->_attack = attack;
}

unsigned int  ClapTrap::getAttack(void) const {
  return (this->_attack);
}

//*                                                     *//
//*                      other                          *//
//*                                                     *//

void ClapTrap::attack(const std::string &target) {
  if (!getHit()) {
      std::cout << "ClapTrap " << this->_name << " can't attack ... is dead" << std::endl;
    return ;
  }
  if (getEnergy() > 0) {
    setEnergy(getEnergy() - 1);
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << getAttack() << " points of damage!" << std::endl;
  }
  else
    std::cout << "ClapTrap " << this->_name << " have no energie left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  unsigned int health = getHit();
  unsigned int damage = 0;

  if (!health){
    std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
    return ;
  }
  if (health < amount) {
    std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage, is now at " << 0 << std::endl;
    setHit(0);
    return ;
  }
  else
    damage = (health - amount);
  setHit(damage);
  std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage, is now at " << getHit() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (getEnergy() > 0)
  {
    unsigned int  tmp = getHit();
    setEnergy(getEnergy() - 1);
    setHit(tmp + amount);
    std::cout << "ClapTrap " << this->_name << " get from " << tmp << " to " << getHit() << " HP" << std::endl;
  }
  else
    std::cout << "ClapTrap " << this->_name << " is too on energy to repair" << std::endl;
}
