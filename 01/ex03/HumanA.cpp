
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_name(name), _arm(weapon) {
};

void  HumanA::attack(void) const{
  std::cout << this->_name << " is using " << this->_arm.getType() << std::endl;
};

HumanA::~HumanA(void) {
};