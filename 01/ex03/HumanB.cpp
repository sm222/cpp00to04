#include "HumanB.hpp"

HumanB::HumanB(const std::string name): _name(name) {
  this->_arm = NULL;
};

void  HumanB::setWeapon(Weapon *arm){
  _arm = arm;
};

HumanB::~HumanB(void) {
};