#include "HumanB.hpp"

HumanB::HumanB(const std::string name): _name(name) {
  this->_arm = NULL;
};

void  HumanB::attack(void) const{
  if (this->_arm)
    std::cout << this->_name << " attacks with their " << this->_arm->getType() << std::endl;
  else
    std::cout << this->_name << " attacks with their hands" << std::endl;
};

  void  HumanB::setType(const std::string &type) {
  if (this->_arm)
    this->_arm->setType(type);
};

void  HumanB::setWeapon(Weapon &arm) {
  _arm = &arm;
};

HumanB::~HumanB(void) {
};